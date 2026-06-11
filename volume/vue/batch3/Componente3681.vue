<template>
  <section class="panel-3681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3681");
const base = ref(3681);
const total = computed(() => base.value * 2);

function incrementar3681() {
  base.value++;
}
</script>
