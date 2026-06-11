<template>
  <section class="panel-41021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41021");
const base = ref(41021);
const total = computed(() => base.value * 2);

function incrementar41021() {
  base.value++;
}
</script>
