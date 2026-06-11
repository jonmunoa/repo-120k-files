<template>
  <section class="panel-16817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16817");
const base = ref(16817);
const total = computed(() => base.value * 2);

function incrementar16817() {
  base.value++;
}
</script>
