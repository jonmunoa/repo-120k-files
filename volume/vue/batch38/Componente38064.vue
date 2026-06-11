<template>
  <div class="componente-38064">
    <p>{{ mensaje38064 }}</p>
    <button @click="accion0">Accion 0</button>
  </div>
</template>

<script>
export default {
  name: "Componente38064",
  data() {
    return { mensaje38064: "valor 38064", contador: 0 };
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
