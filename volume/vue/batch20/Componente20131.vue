<template>
  <div>
    <p>{{ etiqueta }} -- MODIFICADO</p>
  </div>
</template>

<script>
export default {
  name: "Item20131",
  props: { etiqueta: { type: String, default: "item-20131-v2" } }
};
</script>
