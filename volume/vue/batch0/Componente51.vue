<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item51",
  props: { etiqueta: { type: String, default: "item-51-v2" } }
};
</script>
