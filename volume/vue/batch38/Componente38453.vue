<template>
  <section class="panel-38453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38453");
const base = ref(38453);
const total = computed(() => base.value * 2);

function incrementar38453() {
  base.value++;
}
</script>
