<template>
  <section class="panel-45069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45069");
const base = ref(45069);
const total = computed(() => base.value * 2);

function incrementar45069() {
  base.value++;
}
</script>
