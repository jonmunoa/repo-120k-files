<template>
  <section class="panel-5861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5861");
const base = ref(5861);
const total = computed(() => base.value * 2);

function incrementar5861() {
  base.value++;
}
</script>
