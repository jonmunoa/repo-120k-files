<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item1123",
  props: { etiqueta: { type: String, default: "item-1123-v2" } }
};
</script>
