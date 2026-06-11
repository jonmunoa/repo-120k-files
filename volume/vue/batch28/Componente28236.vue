<template>
  <div class="componente-28236">
    <p>{{ mensaje28236 }}</p>
    <button @click="accion0">Accion 0</button>
  </div>
</template>

<script>
export default {
  name: "Componente28236",
  data() {
    return { mensaje28236: "valor 28236", contador: 0 };
  },
  computed: {
    doble() { return this.contador * 2; }
  },
  methods: {
    accion0() { this.contador += 1; }
  },
  watch: {
    contador(nuevo, viejo) { console.log(nuevo, viejo); }
  }
};
</script>
