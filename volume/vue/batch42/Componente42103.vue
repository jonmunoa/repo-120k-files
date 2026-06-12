<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42103",
  props: { etiqueta: { type: String, default: "item-42103-v2" } }
};
</script>
