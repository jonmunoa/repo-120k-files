<template>
  <section class="panel-30685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30685");
const base = ref(30685);
const total = computed(() => base.value * 2);

function incrementar30685() {
  base.value++;
}
</script>
