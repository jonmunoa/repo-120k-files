<template>
  <section class="panel-36249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36249");
const base = ref(36249);
const total = computed(() => base.value * 2);

function incrementar36249() {
  base.value++;
}
</script>
