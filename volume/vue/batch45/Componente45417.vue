<template>
  <section class="panel-45417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45417");
const base = ref(45417);
const total = computed(() => base.value * 2);

function incrementar45417() {
  base.value++;
}
</script>
