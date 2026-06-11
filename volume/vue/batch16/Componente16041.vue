<template>
  <section class="panel-16041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16041");
const base = ref(16041);
const total = computed(() => base.value * 2);

function incrementar16041() {
  base.value++;
}
</script>
