<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item4011",
  props: { etiqueta: { type: String, default: "item-4011-v2" } }
};
</script>
