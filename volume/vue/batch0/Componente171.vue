<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item171",
  props: { etiqueta: { type: String, default: "item-171-v2" } }
};
</script>
