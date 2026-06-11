<template>
  <section class="panel-9237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9237");
const base = ref(9237);
const total = computed(() => base.value * 2);

function incrementar9237() {
  base.value++;
}
</script>
