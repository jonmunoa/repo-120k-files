<template>
  <section class="panel-42405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42405");
const base = ref(42405);
const total = computed(() => base.value * 2);

function incrementar42405() {
  base.value++;
}
</script>
