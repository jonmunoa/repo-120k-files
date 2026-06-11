<template>
  <section class="panel-20093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20093");
const base = ref(20093);
const total = computed(() => base.value * 2);

function incrementar20093() {
  base.value++;
}
</script>
