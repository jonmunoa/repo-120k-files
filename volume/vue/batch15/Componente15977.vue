<template>
  <section class="panel-15977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15977");
const base = ref(15977);
const total = computed(() => base.value * 2);

function incrementar15977() {
  base.value++;
}
</script>
