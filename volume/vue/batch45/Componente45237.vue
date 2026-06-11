<template>
  <section class="panel-45237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45237");
const base = ref(45237);
const total = computed(() => base.value * 2);

function incrementar45237() {
  base.value++;
}
</script>
