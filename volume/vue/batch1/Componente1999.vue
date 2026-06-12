<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item1999",
  props: { etiqueta: { type: String, default: "item-1999-v2" } }
};
</script>
