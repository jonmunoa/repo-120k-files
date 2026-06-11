<template>
  <section class="panel-16625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16625");
const base = ref(16625);
const total = computed(() => base.value * 2);

function incrementar16625() {
  base.value++;
}
</script>
