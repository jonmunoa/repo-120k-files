<template>
  <section class="panel-3221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3221");
const base = ref(3221);
const total = computed(() => base.value * 2);

function incrementar3221() {
  base.value++;
}
</script>
