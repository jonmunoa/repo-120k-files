<template>
  <section class="panel-43885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43885");
const base = ref(43885);
const total = computed(() => base.value * 2);

function incrementar43885() {
  base.value++;
}
</script>
