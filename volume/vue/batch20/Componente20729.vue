<template>
  <section class="panel-20729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20729");
const base = ref(20729);
const total = computed(() => base.value * 2);

function incrementar20729() {
  base.value++;
}
</script>
