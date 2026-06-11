<template>
  <section class="panel-42841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42841");
const base = ref(42841);
const total = computed(() => base.value * 2);

function incrementar42841() {
  base.value++;
}
</script>
