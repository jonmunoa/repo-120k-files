<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item3",
  props: { etiqueta: { type: String, default: "item-3-v2" } }
};
</script>
