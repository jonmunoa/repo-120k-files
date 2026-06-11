<template>
  <section class="panel-44701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44701");
const base = ref(44701);
const total = computed(() => base.value * 2);

function incrementar44701() {
  base.value++;
}
</script>
