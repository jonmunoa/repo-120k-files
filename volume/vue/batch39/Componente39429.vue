<template>
  <section class="panel-39429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39429");
const base = ref(39429);
const total = computed(() => base.value * 2);

function incrementar39429() {
  base.value++;
}
</script>
