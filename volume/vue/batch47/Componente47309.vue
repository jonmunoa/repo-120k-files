<template>
  <section class="panel-47309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47309");
const base = ref(47309);
const total = computed(() => base.value * 2);

function incrementar47309() {
  base.value++;
}
</script>
