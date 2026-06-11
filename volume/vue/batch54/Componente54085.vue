<template>
  <section class="panel-54085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54085");
const base = ref(54085);
const total = computed(() => base.value * 2);

function incrementar54085() {
  base.value++;
}
</script>
