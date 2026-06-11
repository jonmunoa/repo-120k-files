<template>
  <section class="panel-53573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53573");
const base = ref(53573);
const total = computed(() => base.value * 2);

function incrementar53573() {
  base.value++;
}
</script>
