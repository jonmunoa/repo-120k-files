<template>
  <section class="panel-37817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37817");
const base = ref(37817);
const total = computed(() => base.value * 2);

function incrementar37817() {
  base.value++;
}
</script>
