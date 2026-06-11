<template>
  <section class="panel-44949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44949");
const base = ref(44949);
const total = computed(() => base.value * 2);

function incrementar44949() {
  base.value++;
}
</script>
