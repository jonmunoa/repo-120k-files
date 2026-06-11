<template>
  <section class="panel-24465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24465");
const base = ref(24465);
const total = computed(() => base.value * 2);

function incrementar24465() {
  base.value++;
}
</script>
