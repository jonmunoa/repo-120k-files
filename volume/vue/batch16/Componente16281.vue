<template>
  <section class="panel-16281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16281");
const base = ref(16281);
const total = computed(() => base.value * 2);

function incrementar16281() {
  base.value++;
}
</script>
