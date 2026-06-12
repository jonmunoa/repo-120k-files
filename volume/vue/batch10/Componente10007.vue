<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item10007",
  props: { etiqueta: { type: String, default: "item-10007-v2" } }
};
</script>
