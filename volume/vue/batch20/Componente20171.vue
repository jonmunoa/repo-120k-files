<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item20171",
  props: { etiqueta: { type: String, default: "item-20171-v2" } }
};
</script>
