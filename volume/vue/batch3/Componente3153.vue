<template>
  <section class="panel-3153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3153");
const base = ref(3153);
const total = computed(() => base.value * 2);

function incrementar3153() {
  base.value++;
}
</script>
