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

import com.fasterxml.jackson.core.JsonFactory;
import com.fasterxml.jackson.core.JsonProcessingException;
import com.fasterxml.jackson.databind.ObjectWriter;

/**
 * Unfortunately, {@link ObjectWriter} exposes its {@link JsonFactory} via a <code>getFactory</code>
 * method. This allows unsuspecting users to modify the config of that <code>JsonFactory</code>
 * affecting all the mappers, writers and readers that it is associated with.
 */
public class ImmutableObjectWriter {

  private final ObjectWriter objectWriter;

  public ImmutableObjectWriter(final ObjectWriter objectWriter) {
    this.objectWriter = objectWriter;
  }

  public String writeValueAsString(final Object value) throws JsonProcessingException {
    return objectWriter.writeValueAsString(value);
  }
}
