<template>
  <section class="panel-3437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3437");
const base = ref(3437);
const total = computed(() => base.value * 2);

function incrementar3437() {
  base.value++;
}
</script>
