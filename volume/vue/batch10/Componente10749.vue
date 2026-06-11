<template>
  <section class="panel-10749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10749");
const base = ref(10749);
const total = computed(() => base.value * 2);

function incrementar10749() {
  base.value++;
}
</script>
