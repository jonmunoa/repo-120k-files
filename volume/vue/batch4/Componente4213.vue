<template>
  <section class="panel-4213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4213");
const base = ref(4213);
const total = computed(() => base.value * 2);

function incrementar4213() {
  base.value++;
}
</script>
