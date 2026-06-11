<template>
  <section class="panel-6681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6681");
const base = ref(6681);
const total = computed(() => base.value * 2);

function incrementar6681() {
  base.value++;
}
</script>
