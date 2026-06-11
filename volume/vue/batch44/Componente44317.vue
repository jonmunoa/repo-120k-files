<template>
  <section class="panel-44317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44317");
const base = ref(44317);
const total = computed(() => base.value * 2);

function incrementar44317() {
  base.value++;
}
</script>
