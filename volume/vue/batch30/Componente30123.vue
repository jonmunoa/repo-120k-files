<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item30123",
  props: { etiqueta: { type: String, default: "item-30123-v2" } }
};
</script>
