<template>
  <section class="panel-43429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43429");
const base = ref(43429);
const total = computed(() => base.value * 2);

function incrementar43429() {
  base.value++;
}
</script>
