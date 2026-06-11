<template>
  <section class="panel-4085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4085");
const base = ref(4085);
const total = computed(() => base.value * 2);

function incrementar4085() {
  base.value++;
}
</script>
