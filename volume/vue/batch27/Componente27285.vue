<template>
  <section class="panel-27285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27285");
const base = ref(27285);
const total = computed(() => base.value * 2);

function incrementar27285() {
  base.value++;
}
</script>
