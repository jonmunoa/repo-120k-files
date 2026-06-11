<template>
  <section class="panel-36973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36973");
const base = ref(36973);
const total = computed(() => base.value * 2);

function incrementar36973() {
  base.value++;
}
</script>
