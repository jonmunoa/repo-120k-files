<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42891",
  props: { etiqueta: { type: String, default: "item-42891-v2" } }
};
</script>
