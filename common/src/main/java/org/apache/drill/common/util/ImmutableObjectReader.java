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
import com.fasterxml.jackson.databind.ObjectReader;

import java.io.IOException;

/**
 * Unfortunately, {@link ObjectReader} exposes its {@link JsonFactory} via a <code>getFactory</code>
 * method. This allows unsuspecting users to modify the config of that <code>JsonFactory</code>
 * affecting all the mappers, writers and readers that it is associated with.
 */
public class ImmutableObjectReader {

  private final ObjectReader objectReader;

  public ImmutableObjectReader(final ObjectReader objectReader) {
    this.objectReader = objectReader;
  }

  public <T> T readValue(final String input, Class<T> cls) throws IOException {
    return objectReader.readValue(input, cls);
  }

  public <T> T readValue(final String input) throws IOException {
    return objectReader.readValue(input);
  }
}
