<template>
  <section class="panel-16545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16545");
const base = ref(16545);
const total = computed(() => base.value * 2);

function incrementar16545() {
  base.value++;
}
</script>
