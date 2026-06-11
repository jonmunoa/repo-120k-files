<template>
  <section class="panel-901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 901");
const base = ref(901);
const total = computed(() => base.value * 2);

function incrementar901() {
  base.value++;
}
</script>
