<template>
  <section class="panel-9309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9309");
const base = ref(9309);
const total = computed(() => base.value * 2);

function incrementar9309() {
  base.value++;
}
</script>
