<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item111",
  props: { etiqueta: { type: String, default: "item-111-v2" } }
};
</script>
