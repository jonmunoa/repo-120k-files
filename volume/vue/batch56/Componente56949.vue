<template>
  <section class="panel-56949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56949");
const base = ref(56949);
const total = computed(() => base.value * 2);

function incrementar56949() {
  base.value++;
}
</script>
