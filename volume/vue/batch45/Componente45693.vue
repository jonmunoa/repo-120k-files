<template>
  <section class="panel-45693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45693");
const base = ref(45693);
const total = computed(() => base.value * 2);

function incrementar45693() {
  base.value++;
}
</script>
