<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item1987",
  props: { etiqueta: { type: String, default: "item-1987-v2" } }
};
</script>
