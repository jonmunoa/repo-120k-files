<template>
  <section class="panel-42797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42797");
const base = ref(42797);
const total = computed(() => base.value * 2);

function incrementar42797() {
  base.value++;
}
</script>
