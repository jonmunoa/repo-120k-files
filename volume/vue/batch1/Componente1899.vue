<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item1899",
  props: { etiqueta: { type: String, default: "item-1899-v2" } }
};
</script>
