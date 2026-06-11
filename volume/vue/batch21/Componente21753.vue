<template>
  <section class="panel-21753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21753");
const base = ref(21753);
const total = computed(() => base.value * 2);

function incrementar21753() {
  base.value++;
}
</script>
