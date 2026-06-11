<template>
  <section class="panel-56917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56917");
const base = ref(56917);
const total = computed(() => base.value * 2);

function incrementar56917() {
  base.value++;
}
</script>
