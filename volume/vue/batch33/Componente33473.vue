<template>
  <section class="panel-33473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33473");
const base = ref(33473);
const total = computed(() => base.value * 2);

function incrementar33473() {
  base.value++;
}
</script>
