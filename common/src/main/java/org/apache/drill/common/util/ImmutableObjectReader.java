package org.apache.drill.common.util;

import com.fasterxml.jackson.databind.ObjectReader;

import java.io.IOException;

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
