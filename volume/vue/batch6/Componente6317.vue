<template>
  <section class="panel-6317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6317");
const base = ref(6317);
const total = computed(() => base.value * 2);

function incrementar6317() {
  base.value++;
}
</script>
