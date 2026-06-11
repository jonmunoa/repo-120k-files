<template>
  <section class="panel-1065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1065");
const base = ref(1065);
const total = computed(() => base.value * 2);

function incrementar1065() {
  base.value++;
}
</script>
