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
