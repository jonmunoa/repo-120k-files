<template>
  <section class="panel-56313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56313");
const base = ref(56313);
const total = computed(() => base.value * 2);

function incrementar56313() {
  base.value++;
}
</script>
