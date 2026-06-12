<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item55",
  props: { etiqueta: { type: String, default: "item-55-v2" } }
};
</script>
