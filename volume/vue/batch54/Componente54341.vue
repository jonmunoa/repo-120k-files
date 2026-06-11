<template>
  <section class="panel-54341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54341");
const base = ref(54341);
const total = computed(() => base.value * 2);

function incrementar54341() {
  base.value++;
}
</script>
