<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42123",
  props: { etiqueta: { type: String, default: "item-42123-v2" } }
};
</script>
