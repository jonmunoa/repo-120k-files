<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item10987",
  props: { etiqueta: { type: String, default: "item-10987-v2" } }
};
</script>
