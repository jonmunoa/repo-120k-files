<template>
  <section class="panel-1565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1565");
const base = ref(1565);
const total = computed(() => base.value * 2);

function incrementar1565() {
  base.value++;
}
</script>
