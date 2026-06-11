<template>
  <div>
    <p>{{ etiqueta }}: {{ valorFormateado }}</p>
  </div>
</template>

<script>
export default {
  name: "Item37555",
  props: {
    etiqueta: { type: String, default: "item-37555" },
    valor: { type: Number, default: 37555 },
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
.item-37555 { color: blue; }
</style>
