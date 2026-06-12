<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item4999",
  props: { etiqueta: { type: String, default: "item-4999-v2" } }
};
</script>
