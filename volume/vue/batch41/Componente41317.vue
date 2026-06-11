<template>
  <section class="panel-41317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41317");
const base = ref(41317);
const total = computed(() => base.value * 2);

function incrementar41317() {
  base.value++;
}
</script>
