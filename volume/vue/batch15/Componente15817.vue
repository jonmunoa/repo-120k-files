<template>
  <section class="panel-15817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15817");
const base = ref(15817);
const total = computed(() => base.value * 2);

function incrementar15817() {
  base.value++;
}
</script>
