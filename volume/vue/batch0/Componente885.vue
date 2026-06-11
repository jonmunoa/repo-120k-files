<template>
  <section class="panel-885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 885");
const base = ref(885);
const total = computed(() => base.value * 2);

function incrementar885() {
  base.value++;
}
</script>
