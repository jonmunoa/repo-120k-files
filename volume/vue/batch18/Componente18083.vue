<template>
  <div>
    <p>{{ etiqueta }}: {{ valorFormateado }}</p>
  </div>
</template>

<script>
export default {
  name: "Item18083",
  props: {
    etiqueta: { type: String, default: "item-18083" },
    valor: { type: Number, default: 18083 },
    activo: { type: Boolean, default: false }
  },
  computed: {
    valorFormateado() {
      return this.activo ? this.valor * 1.1 : this.valor;
    }
  },
  watch: {
    valor(nuevo) {
      this.$emit("cambio", nuevo);
    },
    activo(nuevo) {
      this.$emit("toggle", nuevo);
    }
  }
};
</script>

<style scoped>
.item-18083 { color: blue; }
</style>
