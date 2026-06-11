<template>
  <section class="panel-5949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5949");
const base = ref(5949);
const total = computed(() => base.value * 2);

function incrementar5949() {
  base.value++;
}
</script>
