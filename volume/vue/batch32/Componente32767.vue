<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item32767",
  props: { etiqueta: { type: String, default: "item-32767-v2" } }
};
</script>
