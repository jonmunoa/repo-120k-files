<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item123",
  props: { etiqueta: { type: String, default: "item-123-v2" } }
};
</script>
