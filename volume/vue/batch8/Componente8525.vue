<template>
  <section class="panel-8525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8525");
const base = ref(8525);
const total = computed(() => base.value * 2);

function incrementar8525() {
  base.value++;
}
</script>
