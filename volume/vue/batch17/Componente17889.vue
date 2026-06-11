<template>
  <section class="panel-17889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17889");
const base = ref(17889);
const total = computed(() => base.value * 2);

function incrementar17889() {
  base.value++;
}
</script>
