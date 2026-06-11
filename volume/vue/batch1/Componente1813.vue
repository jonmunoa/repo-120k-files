<template>
  <section class="panel-1813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1813");
const base = ref(1813);
const total = computed(() => base.value * 2);

function incrementar1813() {
  base.value++;
}
</script>
