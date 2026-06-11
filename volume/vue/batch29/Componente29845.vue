<template>
  <section class="panel-29845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29845");
const base = ref(29845);
const total = computed(() => base.value * 2);

function incrementar29845() {
  base.value++;
}
</script>
