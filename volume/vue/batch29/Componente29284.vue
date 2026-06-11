<template>
  <div class="componente-29284">
    <p>{{ mensaje29284 }}</p>
    <button @click="accion0">Accion 0</button>
    <button @click="accion1">Accion 1</button>
  </div>
</template>

<script>
export default {
  name: "Componente29284",
  data() {
    return { mensaje29284: "valor 29284", contador: 0 };
  },
  computed: {
    doble() { return this.contador * 2; }
  },
  methods: {
    accion0() { this.contador += 1; }
    accion1() { this.contador += 2; }
  },
  watch: {
    contador(nuevo, viejo) { console.log(nuevo, viejo); }
  }
};
</script>
