<template>
  <section class="panel-1077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1077");
const base = ref(1077);
const total = computed(() => base.value * 2);

function incrementar1077() {
  base.value++;
}
</script>
