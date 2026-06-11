<template>
  <section class="panel-39453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39453");
const base = ref(39453);
const total = computed(() => base.value * 2);

function incrementar39453() {
  base.value++;
}
</script>
