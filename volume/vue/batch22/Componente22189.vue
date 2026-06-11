<template>
  <section class="panel-22189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22189");
const base = ref(22189);
const total = computed(() => base.value * 2);

function incrementar22189() {
  base.value++;
}
</script>
