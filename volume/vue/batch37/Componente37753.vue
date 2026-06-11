<template>
  <section class="panel-37753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37753");
const base = ref(37753);
const total = computed(() => base.value * 2);

function incrementar37753() {
  base.value++;
}
</script>
