<template>
  <section class="panel-21885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21885");
const base = ref(21885);
const total = computed(() => base.value * 2);

function incrementar21885() {
  base.value++;
}
</script>
