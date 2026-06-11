<template>
  <section class="panel-43505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43505");
const base = ref(43505);
const total = computed(() => base.value * 2);

function incrementar43505() {
  base.value++;
}
</script>
