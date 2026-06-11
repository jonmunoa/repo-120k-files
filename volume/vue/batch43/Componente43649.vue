<template>
  <section class="panel-43649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43649");
const base = ref(43649);
const total = computed(() => base.value * 2);

function incrementar43649() {
  base.value++;
}
</script>
