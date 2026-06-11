<template>
  <section class="panel-7309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7309");
const base = ref(7309);
const total = computed(() => base.value * 2);

function incrementar7309() {
  base.value++;
}
</script>
