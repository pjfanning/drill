package org.apache.drill.common.util;

import com.fasterxml.jackson.core.JsonProcessingException;
import com.fasterxml.jackson.core.type.TypeReference;
import com.fasterxml.jackson.databind.ObjectMapper;

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
