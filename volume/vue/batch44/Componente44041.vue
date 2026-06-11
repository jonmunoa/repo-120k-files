<template>
  <section class="panel-44041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44041");
const base = ref(44041);
const total = computed(() => base.value * 2);

function incrementar44041() {
  base.value++;
}
</script>
