<template>
  <section class="panel-51173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51173");
const base = ref(51173);
const total = computed(() => base.value * 2);

function incrementar51173() {
  base.value++;
}
</script>
