<template>
  <section class="panel-45817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45817");
const base = ref(45817);
const total = computed(() => base.value * 2);

function incrementar45817() {
  base.value++;
}
</script>
