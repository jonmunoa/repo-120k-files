<template>
  <section class="panel-43861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43861");
const base = ref(43861);
const total = computed(() => base.value * 2);

function incrementar43861() {
  base.value++;
}
</script>
