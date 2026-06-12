<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item143",
  props: { etiqueta: { type: String, default: "item-143-v2" } }
};
</script>
