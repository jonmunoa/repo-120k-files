<template>
  <section class="panel-45729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45729");
const base = ref(45729);
const total = computed(() => base.value * 2);

function incrementar45729() {
  base.value++;
}
</script>
