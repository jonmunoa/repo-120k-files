<template>
  <section class="panel-44313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44313");
const base = ref(44313);
const total = computed(() => base.value * 2);

function incrementar44313() {
  base.value++;
}
</script>
