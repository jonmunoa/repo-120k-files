<template>
  <section class="panel-22265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22265");
const base = ref(22265);
const total = computed(() => base.value * 2);

function incrementar22265() {
  base.value++;
}
</script>
