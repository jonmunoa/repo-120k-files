<template>
  <section class="panel-30885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30885");
const base = ref(30885);
const total = computed(() => base.value * 2);

function incrementar30885() {
  base.value++;
}
</script>
