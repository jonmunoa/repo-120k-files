<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item503",
  props: { etiqueta: { type: String, default: "item-503-v2" } }
};
</script>
