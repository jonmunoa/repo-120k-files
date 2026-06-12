<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item1235",
  props: { etiqueta: { type: String, default: "item-1235-v2" } }
};
</script>
