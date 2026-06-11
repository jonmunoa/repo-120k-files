<template>
  <section class="panel-57889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57889");
const base = ref(57889);
const total = computed(() => base.value * 2);

function incrementar57889() {
  base.value++;
}
</script>
