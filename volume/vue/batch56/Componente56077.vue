<template>
  <section class="panel-56077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56077");
const base = ref(56077);
const total = computed(() => base.value * 2);

function incrementar56077() {
  base.value++;
}
</script>
