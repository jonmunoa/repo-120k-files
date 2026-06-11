<template>
  <section class="panel-2989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2989");
const base = ref(2989);
const total = computed(() => base.value * 2);

function incrementar2989() {
  base.value++;
}
</script>
