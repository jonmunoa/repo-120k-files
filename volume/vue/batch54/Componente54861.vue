<template>
  <section class="panel-54861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54861");
const base = ref(54861);
const total = computed(() => base.value * 2);

function incrementar54861() {
  base.value++;
}
</script>
