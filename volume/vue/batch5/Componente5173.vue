<template>
  <section class="panel-5173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5173");
const base = ref(5173);
const total = computed(() => base.value * 2);

function incrementar5173() {
  base.value++;
}
</script>
