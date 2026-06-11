<template>
  <section class="panel-817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 817");
const base = ref(817);
const total = computed(() => base.value * 2);

function incrementar817() {
  base.value++;
}
</script>
