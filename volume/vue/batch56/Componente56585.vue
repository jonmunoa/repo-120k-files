<template>
  <section class="panel-56585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56585");
const base = ref(56585);
const total = computed(() => base.value * 2);

function incrementar56585() {
  base.value++;
}
</script>
