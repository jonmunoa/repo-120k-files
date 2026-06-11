<template>
  <section class="panel-40925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40925");
const base = ref(40925);
const total = computed(() => base.value * 2);

function incrementar40925() {
  base.value++;
}
</script>
