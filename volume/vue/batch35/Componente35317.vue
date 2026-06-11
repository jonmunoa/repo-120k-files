<template>
  <section class="panel-35317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35317");
const base = ref(35317);
const total = computed(() => base.value * 2);

function incrementar35317() {
  base.value++;
}
</script>
