<template>
  <section class="panel-5309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5309");
const base = ref(5309);
const total = computed(() => base.value * 2);

function incrementar5309() {
  base.value++;
}
</script>
