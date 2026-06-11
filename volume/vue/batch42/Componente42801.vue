<template>
  <section class="panel-42801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42801");
const base = ref(42801);
const total = computed(() => base.value * 2);

function incrementar42801() {
  base.value++;
}
</script>
