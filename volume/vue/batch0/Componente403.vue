<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item403",
  props: { etiqueta: { type: String, default: "item-403-v2" } }
};
</script>
