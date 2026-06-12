<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item1103",
  props: { etiqueta: { type: String, default: "item-1103-v2" } }
};
</script>
