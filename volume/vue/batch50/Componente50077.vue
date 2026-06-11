<template>
  <section class="panel-50077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50077");
const base = ref(50077);
const total = computed(() => base.value * 2);

function incrementar50077() {
  base.value++;
}
</script>
