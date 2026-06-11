<template>
  <section class="panel-55665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55665");
const base = ref(55665);
const total = computed(() => base.value * 2);

function incrementar55665() {
  base.value++;
}
</script>
