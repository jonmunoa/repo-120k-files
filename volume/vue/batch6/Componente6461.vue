<template>
  <section class="panel-6461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6461");
const base = ref(6461);
const total = computed(() => base.value * 2);

function incrementar6461() {
  base.value++;
}
</script>
