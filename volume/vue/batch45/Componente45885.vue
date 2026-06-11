<template>
  <section class="panel-45885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45885");
const base = ref(45885);
const total = computed(() => base.value * 2);

function incrementar45885() {
  base.value++;
}
</script>
