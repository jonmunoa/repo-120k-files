<template>
  <section class="panel-3701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3701");
const base = ref(3701);
const total = computed(() => base.value * 2);

function incrementar3701() {
  base.value++;
}
</script>
