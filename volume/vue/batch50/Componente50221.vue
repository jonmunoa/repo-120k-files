<template>
  <section class="panel-50221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50221");
const base = ref(50221);
const total = computed(() => base.value * 2);

function incrementar50221() {
  base.value++;
}
</script>
