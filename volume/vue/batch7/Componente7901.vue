<template>
  <section class="panel-7901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7901");
const base = ref(7901);
const total = computed(() => base.value * 2);

function incrementar7901() {
  base.value++;
}
</script>
