<template>
  <section class="panel-31885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31885");
const base = ref(31885);
const total = computed(() => base.value * 2);

function incrementar31885() {
  base.value++;
}
</script>
