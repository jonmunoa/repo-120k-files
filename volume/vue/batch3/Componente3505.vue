<template>
  <section class="panel-3505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3505");
const base = ref(3505);
const total = computed(() => base.value * 2);

function incrementar3505() {
  base.value++;
}
</script>
