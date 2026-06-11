<template>
  <section class="panel-36453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36453");
const base = ref(36453);
const total = computed(() => base.value * 2);

function incrementar36453() {
  base.value++;
}
</script>
