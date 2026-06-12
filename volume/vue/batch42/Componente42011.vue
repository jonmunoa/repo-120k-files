<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42011",
  props: { etiqueta: { type: String, default: "item-42011-v2" } }
};
</script>
