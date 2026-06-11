<template>
  <section class="panel-54173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54173");
const base = ref(54173);
const total = computed(() => base.value * 2);

function incrementar54173() {
  base.value++;
}
</script>
