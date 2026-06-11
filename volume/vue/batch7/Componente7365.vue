<template>
  <section class="panel-7365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7365");
const base = ref(7365);
const total = computed(() => base.value * 2);

function incrementar7365() {
  base.value++;
}
</script>
