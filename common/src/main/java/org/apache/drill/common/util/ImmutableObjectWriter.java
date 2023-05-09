package org.apache.drill.common.util;

import com.fasterxml.jackson.core.JsonProcessingException;
import com.fasterxml.jackson.databind.ObjectWriter;

public class ImmutableObjectWriter {

  private final ObjectWriter objectWriter;

  public ImmutableObjectWriter(final ObjectWriter objectWriter) {
    this.objectWriter = objectWriter;
  }

  public String writeValueAsString(final Object value) throws JsonProcessingException {
    return objectWriter.writeValueAsString(value);
  }
}
