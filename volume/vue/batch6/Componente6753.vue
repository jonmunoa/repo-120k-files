<template>
  <section class="panel-6753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6753");
const base = ref(6753);
const total = computed(() => base.value * 2);

function incrementar6753() {
  base.value++;
}
</script>
