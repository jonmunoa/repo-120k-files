<template>
  <section class="panel-23085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23085");
const base = ref(23085);
const total = computed(() => base.value * 2);

function incrementar23085() {
  base.value++;
}
</script>
