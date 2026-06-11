<template>
  <section class="panel-10169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10169");
const base = ref(10169);
const total = computed(() => base.value * 2);

function incrementar10169() {
  base.value++;
}
</script>
