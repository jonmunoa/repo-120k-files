<template>
  <section class="panel-6289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6289");
const base = ref(6289);
const total = computed(() => base.value * 2);

function incrementar6289() {
  base.value++;
}
</script>
