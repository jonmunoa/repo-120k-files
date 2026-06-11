<template>
  <section class="panel-32077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32077");
const base = ref(32077);
const total = computed(() => base.value * 2);

function incrementar32077() {
  base.value++;
}
</script>
