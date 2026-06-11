<template>
  <section class="panel-19629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19629");
const base = ref(19629);
const total = computed(() => base.value * 2);

function incrementar19629() {
  base.value++;
}
</script>
