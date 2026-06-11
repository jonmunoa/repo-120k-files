<template>
  <section class="panel-1117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1117");
const base = ref(1117);
const total = computed(() => base.value * 2);

function incrementar1117() {
  base.value++;
}
</script>
