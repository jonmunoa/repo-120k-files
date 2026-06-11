<template>
  <section class="panel-31265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31265");
const base = ref(31265);
const total = computed(() => base.value * 2);

function incrementar31265() {
  base.value++;
}
</script>
