<template>
  <section class="panel-44429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44429");
const base = ref(44429);
const total = computed(() => base.value * 2);

function incrementar44429() {
  base.value++;
}
</script>
