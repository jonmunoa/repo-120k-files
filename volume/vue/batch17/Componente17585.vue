<template>
  <section class="panel-17585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17585");
const base = ref(17585);
const total = computed(() => base.value * 2);

function incrementar17585() {
  base.value++;
}
</script>
