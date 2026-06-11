<template>
  <section class="panel-52989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52989");
const base = ref(52989);
const total = computed(() => base.value * 2);

function incrementar52989() {
  base.value++;
}
</script>
