<template>
  <section class="panel-45313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45313");
const base = ref(45313);
const total = computed(() => base.value * 2);

function incrementar45313() {
  base.value++;
}
</script>
