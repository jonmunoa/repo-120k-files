<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item223",
  props: { etiqueta: { type: String, default: "item-223-v2" } }
};
</script>
