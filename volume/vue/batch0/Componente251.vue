<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item251",
  props: { etiqueta: { type: String, default: "item-251-v2" } }
};
</script>
