<template>
  <section class="panel-16801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16801");
const base = ref(16801);
const total = computed(() => base.value * 2);

function incrementar16801() {
  base.value++;
}
</script>
