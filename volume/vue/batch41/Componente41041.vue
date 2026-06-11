<template>
  <section class="panel-41041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41041");
const base = ref(41041);
const total = computed(() => base.value * 2);

function incrementar41041() {
  base.value++;
}
</script>
