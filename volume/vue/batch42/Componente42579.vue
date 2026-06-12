<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42579",
  props: { etiqueta: { type: String, default: "item-42579-v2" } }
};
</script>
