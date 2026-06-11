<template>
  <section class="panel-1817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1817");
const base = ref(1817);
const total = computed(() => base.value * 2);

function incrementar1817() {
  base.value++;
}
</script>
