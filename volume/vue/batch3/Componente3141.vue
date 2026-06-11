<template>
  <section class="panel-3141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3141");
const base = ref(3141);
const total = computed(() => base.value * 2);

function incrementar3141() {
  base.value++;
}
</script>
