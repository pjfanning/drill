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
