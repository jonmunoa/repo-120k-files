<template>
  <section class="panel-51041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51041");
const base = ref(51041);
const total = computed(() => base.value * 2);

function incrementar51041() {
  base.value++;
}
</script>
