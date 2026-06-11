<template>
  <section class="panel-30153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30153");
const base = ref(30153);
const total = computed(() => base.value * 2);

function incrementar30153() {
  base.value++;
}
</script>
