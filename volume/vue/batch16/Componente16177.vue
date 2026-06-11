<template>
  <section class="panel-16177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16177");
const base = ref(16177);
const total = computed(() => base.value * 2);

function incrementar16177() {
  base.value++;
}
</script>
