<template>
  <section class="panel-56033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56033");
const base = ref(56033);
const total = computed(() => base.value * 2);

function incrementar56033() {
  base.value++;
}
</script>
