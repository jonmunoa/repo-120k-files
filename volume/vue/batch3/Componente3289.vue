<template>
  <section class="panel-3289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3289");
const base = ref(3289);
const total = computed(() => base.value * 2);

function incrementar3289() {
  base.value++;
}
</script>
