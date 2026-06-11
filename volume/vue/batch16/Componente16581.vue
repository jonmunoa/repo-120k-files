<template>
  <section class="panel-16581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16581");
const base = ref(16581);
const total = computed(() => base.value * 2);

function incrementar16581() {
  base.value++;
}
</script>
