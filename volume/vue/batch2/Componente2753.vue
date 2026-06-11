<template>
  <section class="panel-2753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2753");
const base = ref(2753);
const total = computed(() => base.value * 2);

function incrementar2753() {
  base.value++;
}
</script>
