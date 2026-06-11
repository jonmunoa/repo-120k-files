<template>
  <section class="panel-36221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36221");
const base = ref(36221);
const total = computed(() => base.value * 2);

function incrementar36221() {
  base.value++;
}
</script>
