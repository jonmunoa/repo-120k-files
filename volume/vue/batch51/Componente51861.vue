<template>
  <section class="panel-51861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51861");
const base = ref(51861);
const total = computed(() => base.value * 2);

function incrementar51861() {
  base.value++;
}
</script>
