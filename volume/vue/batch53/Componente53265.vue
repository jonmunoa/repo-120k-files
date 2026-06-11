<template>
  <section class="panel-53265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53265");
const base = ref(53265);
const total = computed(() => base.value * 2);

function incrementar53265() {
  base.value++;
}
</script>
