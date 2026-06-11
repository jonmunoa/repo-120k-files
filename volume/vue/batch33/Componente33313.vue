<template>
  <section class="panel-33313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33313");
const base = ref(33313);
const total = computed(() => base.value * 2);

function incrementar33313() {
  base.value++;
}
</script>
