<template>
  <section class="panel-15885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15885");
const base = ref(15885);
const total = computed(() => base.value * 2);

function incrementar15885() {
  base.value++;
}
</script>
