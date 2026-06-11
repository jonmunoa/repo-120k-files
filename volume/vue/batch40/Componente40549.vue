<template>
  <section class="panel-40549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40549");
const base = ref(40549);
const total = computed(() => base.value * 2);

function incrementar40549() {
  base.value++;
}
</script>
