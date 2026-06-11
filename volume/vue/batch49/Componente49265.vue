<template>
  <section class="panel-49265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49265");
const base = ref(49265);
const total = computed(() => base.value * 2);

function incrementar49265() {
  base.value++;
}
</script>
