<template>
  <section class="panel-24453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24453");
const base = ref(24453);
const total = computed(() => base.value * 2);

function incrementar24453() {
  base.value++;
}
</script>
