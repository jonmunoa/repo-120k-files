<template>
  <section class="panel-8453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8453");
const base = ref(8453);
const total = computed(() => base.value * 2);

function incrementar8453() {
  base.value++;
}
</script>
