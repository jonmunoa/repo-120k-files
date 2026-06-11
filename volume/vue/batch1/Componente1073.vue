<template>
  <section class="panel-1073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1073");
const base = ref(1073);
const total = computed(() => base.value * 2);

function incrementar1073() {
  base.value++;
}
</script>
