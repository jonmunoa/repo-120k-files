<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item1903",
  props: { etiqueta: { type: String, default: "item-1903-v2" } }
};
</script>
