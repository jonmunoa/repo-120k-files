<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item107",
  props: { etiqueta: { type: String, default: "item-107-v2" } }
};
</script>
