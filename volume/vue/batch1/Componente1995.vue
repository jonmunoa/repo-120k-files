<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item1995",
  props: { etiqueta: { type: String, default: "item-1995-v2" } }
};
</script>
