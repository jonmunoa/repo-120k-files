<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item35",
  props: { etiqueta: { type: String, default: "item-35-v2" } }
};
</script>
