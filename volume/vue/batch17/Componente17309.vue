<template>
  <section class="panel-17309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17309");
const base = ref(17309);
const total = computed(() => base.value * 2);

function incrementar17309() {
  base.value++;
}
</script>
