<template>
  <section class="panel-18413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18413");
const base = ref(18413);
const total = computed(() => base.value * 2);

function incrementar18413() {
  base.value++;
}
</script>
