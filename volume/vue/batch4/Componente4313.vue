<template>
  <section class="panel-4313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4313");
const base = ref(4313);
const total = computed(() => base.value * 2);

function incrementar4313() {
  base.value++;
}
</script>
