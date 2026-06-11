<template>
  <section class="panel-13753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13753");
const base = ref(13753);
const total = computed(() => base.value * 2);

function incrementar13753() {
  base.value++;
}
</script>
