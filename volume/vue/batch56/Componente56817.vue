<template>
  <section class="panel-56817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56817");
const base = ref(56817);
const total = computed(() => base.value * 2);

function incrementar56817() {
  base.value++;
}
</script>
