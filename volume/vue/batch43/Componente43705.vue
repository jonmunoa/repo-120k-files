<template>
  <section class="panel-43705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43705");
const base = ref(43705);
const total = computed(() => base.value * 2);

function incrementar43705() {
  base.value++;
}
</script>
