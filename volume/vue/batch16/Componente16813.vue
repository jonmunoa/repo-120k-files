<template>
  <section class="panel-16813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16813");
const base = ref(16813);
const total = computed(() => base.value * 2);

function incrementar16813() {
  base.value++;
}
</script>
