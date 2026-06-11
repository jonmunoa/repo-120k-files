<template>
  <section class="panel-31137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31137");
const base = ref(31137);
const total = computed(() => base.value * 2);

function incrementar31137() {
  base.value++;
}
</script>
