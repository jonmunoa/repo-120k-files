<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item75",
  props: { etiqueta: { type: String, default: "item-75-v2" } }
};
</script>
