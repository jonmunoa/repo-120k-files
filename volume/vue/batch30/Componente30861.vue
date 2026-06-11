<template>
  <section class="panel-30861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30861");
const base = ref(30861);
const total = computed(() => base.value * 2);

function incrementar30861() {
  base.value++;
}
</script>
