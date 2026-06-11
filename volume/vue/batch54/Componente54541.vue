<template>
  <section class="panel-54541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54541");
const base = ref(54541);
const total = computed(() => base.value * 2);

function incrementar54541() {
  base.value++;
}
</script>
