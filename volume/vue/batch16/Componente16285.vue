<template>
  <section class="panel-16285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16285");
const base = ref(16285);
const total = computed(() => base.value * 2);

function incrementar16285() {
  base.value++;
}
</script>
