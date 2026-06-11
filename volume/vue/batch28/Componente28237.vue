<template>
  <section class="panel-28237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28237");
const base = ref(28237);
const total = computed(() => base.value * 2);

function incrementar28237() {
  base.value++;
}
</script>
