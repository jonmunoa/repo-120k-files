<template>
  <section class="panel-2817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2817");
const base = ref(2817);
const total = computed(() => base.value * 2);

function incrementar2817() {
  base.value++;
}
</script>
