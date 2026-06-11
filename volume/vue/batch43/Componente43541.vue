<template>
  <section class="panel-43541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43541");
const base = ref(43541);
const total = computed(() => base.value * 2);

function incrementar43541() {
  base.value++;
}
</script>
