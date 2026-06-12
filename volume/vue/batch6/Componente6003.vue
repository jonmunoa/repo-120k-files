<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item6003",
  props: { etiqueta: { type: String, default: "item-6003-v2" } }
};
</script>
