<template>
  <section class="panel-4077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4077");
const base = ref(4077);
const total = computed(() => base.value * 2);

function incrementar4077() {
  base.value++;
}
</script>
