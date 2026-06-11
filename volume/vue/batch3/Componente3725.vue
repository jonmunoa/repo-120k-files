<template>
  <section class="panel-3725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3725");
const base = ref(3725);
const total = computed(() => base.value * 2);

function incrementar3725() {
  base.value++;
}
</script>
