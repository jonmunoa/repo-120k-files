<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42063",
  props: { etiqueta: { type: String, default: "item-42063-v2" } }
};
</script>
