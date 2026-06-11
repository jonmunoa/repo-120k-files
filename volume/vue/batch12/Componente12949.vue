<template>
  <section class="panel-12949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12949");
const base = ref(12949);
const total = computed(() => base.value * 2);

function incrementar12949() {
  base.value++;
}
</script>
