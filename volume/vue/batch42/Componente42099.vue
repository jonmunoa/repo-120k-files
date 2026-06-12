<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item42099",
  props: { etiqueta: { type: String, default: "item-42099-v2" } }
};
</script>
