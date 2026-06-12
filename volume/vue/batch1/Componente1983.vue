<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item1983",
  props: { etiqueta: { type: String, default: "item-1983-v2" } }
};
</script>
