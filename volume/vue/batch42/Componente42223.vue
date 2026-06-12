<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42223",
  props: { etiqueta: { type: String, default: "item-42223-v2" } }
};
</script>
