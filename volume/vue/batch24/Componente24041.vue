<template>
  <section class="panel-24041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24041");
const base = ref(24041);
const total = computed(() => base.value * 2);

function incrementar24041() {
  base.value++;
}
</script>
