<template>
  <section class="panel-52549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52549");
const base = ref(52549);
const total = computed(() => base.value * 2);

function incrementar52549() {
  base.value++;
}
</script>
