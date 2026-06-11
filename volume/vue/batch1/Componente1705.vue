<template>
  <section class="panel-1705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1705");
const base = ref(1705);
const total = computed(() => base.value * 2);

function incrementar1705() {
  base.value++;
}
</script>
