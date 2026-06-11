<template>
  <section class="panel-3005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3005");
const base = ref(3005);
const total = computed(() => base.value * 2);

function incrementar3005() {
  base.value++;
}
</script>
