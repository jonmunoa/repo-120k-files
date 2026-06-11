<template>
  <section class="panel-3973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3973");
const base = ref(3973);
const total = computed(() => base.value * 2);

function incrementar3973() {
  base.value++;
}
</script>
