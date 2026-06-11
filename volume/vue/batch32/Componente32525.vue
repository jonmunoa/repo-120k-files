<template>
  <section class="panel-32525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32525");
const base = ref(32525);
const total = computed(() => base.value * 2);

function incrementar32525() {
  base.value++;
}
</script>
