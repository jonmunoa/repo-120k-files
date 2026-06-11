<template>
  <section class="panel-54417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54417");
const base = ref(54417);
const total = computed(() => base.value * 2);

function incrementar54417() {
  base.value++;
}
</script>
