<template>
  <section class="panel-6137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6137");
const base = ref(6137);
const total = computed(() => base.value * 2);

function incrementar6137() {
  base.value++;
}
</script>
