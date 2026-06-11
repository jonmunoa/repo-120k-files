<template>
  <section class="panel-3197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3197");
const base = ref(3197);
const total = computed(() => base.value * 2);

function incrementar3197() {
  base.value++;
}
</script>
