<template>
  <section class="panel-24841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24841");
const base = ref(24841);
const total = computed(() => base.value * 2);

function incrementar24841() {
  base.value++;
}
</script>
