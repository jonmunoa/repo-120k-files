<template>
  <section class="panel-41749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41749");
const base = ref(41749);
const total = computed(() => base.value * 2);

function incrementar41749() {
  base.value++;
}
</script>
