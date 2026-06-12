<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42015",
  props: { etiqueta: { type: String, default: "item-42015-v2" } }
};
</script>
