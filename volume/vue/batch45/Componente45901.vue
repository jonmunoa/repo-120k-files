<template>
  <section class="panel-45901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45901");
const base = ref(45901);
const total = computed(() => base.value * 2);

function incrementar45901() {
  base.value++;
}
</script>
