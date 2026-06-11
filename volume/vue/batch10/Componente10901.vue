<template>
  <section class="panel-10901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10901");
const base = ref(10901);
const total = computed(() => base.value * 2);

function incrementar10901() {
  base.value++;
}
</script>
