<template>
  <section class="panel-45221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45221");
const base = ref(45221);
const total = computed(() => base.value * 2);

function incrementar45221() {
  base.value++;
}
</script>
