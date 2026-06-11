<template>
  <section class="panel-43625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43625");
const base = ref(43625);
const total = computed(() => base.value * 2);

function incrementar43625() {
  base.value++;
}
</script>
