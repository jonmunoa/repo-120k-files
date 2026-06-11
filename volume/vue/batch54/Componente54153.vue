<template>
  <section class="panel-54153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54153");
const base = ref(54153);
const total = computed(() => base.value * 2);

function incrementar54153() {
  base.value++;
}
</script>
