<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42343",
  props: { etiqueta: { type: String, default: "item-42343-v2" } }
};
</script>
