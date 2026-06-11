<template>
  <section class="panel-54041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54041");
const base = ref(54041);
const total = computed(() => base.value * 2);

function incrementar54041() {
  base.value++;
}
</script>
