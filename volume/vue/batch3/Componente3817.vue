<template>
  <section class="panel-3817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3817");
const base = ref(3817);
const total = computed(() => base.value * 2);

function incrementar3817() {
  base.value++;
}
</script>
