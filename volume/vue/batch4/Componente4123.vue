<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item4123",
  props: { etiqueta: { type: String, default: "item-4123-v2" } }
};
</script>
