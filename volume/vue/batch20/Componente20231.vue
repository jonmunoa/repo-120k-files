<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item20231",
  props: { etiqueta: { type: String, default: "item-20231-v2" } }
};
</script>
