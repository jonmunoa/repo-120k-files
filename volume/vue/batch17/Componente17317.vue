<template>
  <section class="panel-17317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17317");
const base = ref(17317);
const total = computed(() => base.value * 2);

function incrementar17317() {
  base.value++;
}
</script>
