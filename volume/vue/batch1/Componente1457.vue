<template>
  <section class="panel-1457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1457");
const base = ref(1457);
const total = computed(() => base.value * 2);

function incrementar1457() {
  base.value++;
}
</script>
