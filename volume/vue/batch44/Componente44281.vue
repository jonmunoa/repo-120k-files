<template>
  <section class="panel-44281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44281");
const base = ref(44281);
const total = computed(() => base.value * 2);

function incrementar44281() {
  base.value++;
}
</script>
