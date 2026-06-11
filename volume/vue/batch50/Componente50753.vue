<template>
  <section class="panel-50753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50753");
const base = ref(50753);
const total = computed(() => base.value * 2);

function incrementar50753() {
  base.value++;
}
</script>
