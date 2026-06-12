<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item23",
  props: { etiqueta: { type: String, default: "item-23-v2" } }
};
</script>
