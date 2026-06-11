<template>
  <div class="componente-34288">
    <p>{{ mensaje34288 }}</p>
    <button @click="accion0">Accion 0</button>
    <button @click="accion1">Accion 1</button>
  </div>
</template>

<script>
export default {
  name: "Componente34288",
  data() {
    return { mensaje34288: "valor 34288", contador: 0 };
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
