<template>
  <section class="panel-32041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32041");
const base = ref(32041);
const total = computed(() => base.value * 2);

function incrementar32041() {
  base.value++;
}
</script>
