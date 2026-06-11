<template>
  <section class="panel-10885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10885");
const base = ref(10885);
const total = computed(() => base.value * 2);

function incrementar10885() {
  base.value++;
}
</script>
