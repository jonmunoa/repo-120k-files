<template>
  <section class="panel-4817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4817");
const base = ref(4817);
const total = computed(() => base.value * 2);

function incrementar4817() {
  base.value++;
}
</script>
