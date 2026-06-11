<template>
  <section class="panel-9989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9989");
const base = ref(9989);
const total = computed(() => base.value * 2);

function incrementar9989() {
  base.value++;
}
</script>
