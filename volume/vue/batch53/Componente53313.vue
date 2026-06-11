<template>
  <section class="panel-53313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53313");
const base = ref(53313);
const total = computed(() => base.value * 2);

function incrementar53313() {
  base.value++;
}
</script>
