<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item1007",
  props: { etiqueta: { type: String, default: "item-1007-v2" } }
};
</script>
