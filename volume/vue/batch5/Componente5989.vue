<template>
  <section class="panel-5989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5989");
const base = ref(5989);
const total = computed(() => base.value * 2);

function incrementar5989() {
  base.value++;
}
</script>
