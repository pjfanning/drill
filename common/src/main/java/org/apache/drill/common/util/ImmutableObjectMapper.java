/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package org.apache.drill.common.util;

import com.fasterxml.jackson.core.JsonProcessingException;
import com.fasterxml.jackson.core.type.TypeReference;
import com.fasterxml.jackson.databind.ObjectMapper;

/**
 * Unfortunately, {@link ObjectMapper} exposes APIs that allow unsuspecting users to change the config
 * of that mapper and if it is used by other code, then that code could be affected by the changes.
 */
public class ImmutableObjectMapper {

  private final ObjectMapper objectMapper;

  public ImmutableObjectMapper(final ObjectMapper objectMapper) {
    this.objectMapper = objectMapper;
  }

  public <T> T readValue(final String input, Class<T> cls) throws JsonProcessingException {
    return objectMapper.readValue(input, cls);
  }

  public <T> T readValue(final String input, TypeReference<T> cls) throws JsonProcessingException {
    return objectMapper.readValue(input, cls);
  }

  public ImmutableObjectReader readerFor(Class<?> cls) {
    return new ImmutableObjectReader(objectMapper.readerFor(cls));
  }

  public String writeValueAsString(final Object value) throws JsonProcessingException {
    return objectMapper.writeValueAsString(value);
  }

  public ImmutableObjectWriter writerFor(Class<?> cls) {
    return new ImmutableObjectWriter(objectMapper.writerFor(cls));
  }
}
