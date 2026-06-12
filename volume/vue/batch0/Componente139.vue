<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item139",
  props: { etiqueta: { type: String, default: "item-139-v2" } }
};
</script>
