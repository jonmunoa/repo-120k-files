<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item6443",
  props: { etiqueta: { type: String, default: "item-6443-v2" } }
};
</script>
