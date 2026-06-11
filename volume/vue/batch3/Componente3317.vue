<template>
  <section class="panel-3317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3317");
const base = ref(3317);
const total = computed(() => base.value * 2);

function incrementar3317() {
  base.value++;
}
</script>
