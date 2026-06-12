<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item5111",
  props: { etiqueta: { type: String, default: "item-5111-v2" } }
};
</script>
