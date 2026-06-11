<template>
  <section class="panel-56429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56429");
const base = ref(56429);
const total = computed(() => base.value * 2);

function incrementar56429() {
  base.value++;
}
</script>
