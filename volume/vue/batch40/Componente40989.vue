<template>
  <section class="panel-40989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40989");
const base = ref(40989);
const total = computed(() => base.value * 2);

function incrementar40989() {
  base.value++;
}
</script>
