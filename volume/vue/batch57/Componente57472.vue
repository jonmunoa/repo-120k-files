<template>
  <div class="componente-57472">
    <p>{{ mensaje57472 }}</p>
    <button @click="accion0">Accion 0</button>
    <button @click="accion1">Accion 1</button>
  </div>
</template>

<script>
export default {
  name: "Componente57472",
  data() {
    return { mensaje57472: "valor 57472", contador: 0 };
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
