<template>
  <section class="panel-22753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22753");
const base = ref(22753);
const total = computed(() => base.value * 2);

function incrementar22753() {
  base.value++;
}
</script>
