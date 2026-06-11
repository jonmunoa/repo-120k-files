<template>
  <section class="panel-49949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49949");
const base = ref(49949);
const total = computed(() => base.value * 2);

function incrementar49949() {
  base.value++;
}
</script>
