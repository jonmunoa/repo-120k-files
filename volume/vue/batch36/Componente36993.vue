<template>
  <section class="panel-36993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36993");
const base = ref(36993);
const total = computed(() => base.value * 2);

function incrementar36993() {
  base.value++;
}
</script>
