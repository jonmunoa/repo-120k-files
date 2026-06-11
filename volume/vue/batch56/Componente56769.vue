<template>
  <section class="panel-56769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56769");
const base = ref(56769);
const total = computed(() => base.value * 2);

function incrementar56769() {
  base.value++;
}
</script>
