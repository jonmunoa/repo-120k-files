<template>
  <section class="panel-35309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35309");
const base = ref(35309);
const total = computed(() => base.value * 2);

function incrementar35309() {
  base.value++;
}
</script>
