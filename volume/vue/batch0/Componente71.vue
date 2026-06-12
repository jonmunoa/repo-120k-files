<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item71",
  props: { etiqueta: { type: String, default: "item-71-v2" } }
};
</script>
