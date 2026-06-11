<template>
  <section class="panel-44413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44413");
const base = ref(44413);
const total = computed(() => base.value * 2);

function incrementar44413() {
  base.value++;
}
</script>
