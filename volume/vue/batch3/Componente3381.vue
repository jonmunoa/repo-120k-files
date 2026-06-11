<template>
  <section class="panel-3381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3381");
const base = ref(3381);
const total = computed(() => base.value * 2);

function incrementar3381() {
  base.value++;
}
</script>
