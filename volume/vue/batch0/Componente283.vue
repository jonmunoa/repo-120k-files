<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item283",
  props: { etiqueta: { type: String, default: "item-283-v2" } }
};
</script>
