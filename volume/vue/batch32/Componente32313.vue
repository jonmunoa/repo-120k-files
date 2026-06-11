<template>
  <section class="panel-32313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32313");
const base = ref(32313);
const total = computed(() => base.value * 2);

function incrementar32313() {
  base.value++;
}
</script>
