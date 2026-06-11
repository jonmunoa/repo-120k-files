<template>
  <section class="panel-753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 753");
const base = ref(753);
const total = computed(() => base.value * 2);

function incrementar753() {
  base.value++;
}
</script>
