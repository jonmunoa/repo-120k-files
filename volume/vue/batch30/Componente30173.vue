<template>
  <section class="panel-30173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30173");
const base = ref(30173);
const total = computed(() => base.value * 2);

function incrementar30173() {
  base.value++;
}
</script>
