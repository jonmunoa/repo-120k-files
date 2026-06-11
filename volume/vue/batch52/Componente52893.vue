<template>
  <section class="panel-52893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52893");
const base = ref(52893);
const total = computed(() => base.value * 2);

function incrementar52893() {
  base.value++;
}
</script>
