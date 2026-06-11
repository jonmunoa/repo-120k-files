<template>
  <section class="panel-3581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3581");
const base = ref(3581);
const total = computed(() => base.value * 2);

function incrementar3581() {
  base.value++;
}
</script>
