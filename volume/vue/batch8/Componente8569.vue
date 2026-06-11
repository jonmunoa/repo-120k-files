<template>
  <section class="panel-8569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8569");
const base = ref(8569);
const total = computed(() => base.value * 2);

function incrementar8569() {
  base.value++;
}
</script>
