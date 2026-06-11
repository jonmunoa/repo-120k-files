<template>
  <section class="panel-54429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54429");
const base = ref(54429);
const total = computed(() => base.value * 2);

function incrementar54429() {
  base.value++;
}
</script>
