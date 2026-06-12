<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42987",
  props: { etiqueta: { type: String, default: "item-42987-v2" } }
};
</script>
