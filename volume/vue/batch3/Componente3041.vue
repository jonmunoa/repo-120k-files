<template>
  <section class="panel-3041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3041");
const base = ref(3041);
const total = computed(() => base.value * 2);

function incrementar3041() {
  base.value++;
}
</script>
