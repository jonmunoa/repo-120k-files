<template>
  <section class="panel-20989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20989");
const base = ref(20989);
const total = computed(() => base.value * 2);

function incrementar20989() {
  base.value++;
}
</script>
