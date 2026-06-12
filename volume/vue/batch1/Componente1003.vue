<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item1003",
  props: { etiqueta: { type: String, default: "item-1003-v2" } }
};
</script>
