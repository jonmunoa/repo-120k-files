<template>
  <section class="panel-30065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30065");
const base = ref(30065);
const total = computed(() => base.value * 2);

function incrementar30065() {
  base.value++;
}
</script>
