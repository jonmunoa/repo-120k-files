<template>
  <section class="panel-54885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54885");
const base = ref(54885);
const total = computed(() => base.value * 2);

function incrementar54885() {
  base.value++;
}
</script>
