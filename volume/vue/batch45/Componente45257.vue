<template>
  <section class="panel-45257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45257");
const base = ref(45257);
const total = computed(() => base.value * 2);

function incrementar45257() {
  base.value++;
}
</script>
