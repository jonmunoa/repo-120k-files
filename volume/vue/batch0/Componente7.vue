<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item7",
  props: { etiqueta: { type: String, default: "item-7-v2" } }
};
</script>
