<template>
  <section class="panel-55585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55585");
const base = ref(55585);
const total = computed(() => base.value * 2);

function incrementar55585() {
  base.value++;
}
</script>
