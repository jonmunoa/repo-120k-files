<template>
  <section class="panel-8753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8753");
const base = ref(8753);
const total = computed(() => base.value * 2);

function incrementar8753() {
  base.value++;
}
</script>
