<template>
  <section class="panel-39041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39041");
const base = ref(39041);
const total = computed(() => base.value * 2);

function incrementar39041() {
  base.value++;
}
</script>
