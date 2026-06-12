<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42999",
  props: { etiqueta: { type: String, default: "item-42999-v2" } }
};
</script>
