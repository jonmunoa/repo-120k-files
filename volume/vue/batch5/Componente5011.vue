<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item5011",
  props: { etiqueta: { type: String, default: "item-5011-v2" } }
};
</script>
