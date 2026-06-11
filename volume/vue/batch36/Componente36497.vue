<template>
  <section class="panel-36497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36497");
const base = ref(36497);
const total = computed(() => base.value * 2);

function incrementar36497() {
  base.value++;
}
</script>
