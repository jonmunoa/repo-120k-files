<template>
  <section class="panel-21565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21565");
const base = ref(21565);
const total = computed(() => base.value * 2);

function incrementar21565() {
  base.value++;
}
</script>
