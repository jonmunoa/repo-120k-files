<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item911",
  props: { etiqueta: { type: String, default: "item-911-v2" } }
};
</script>
