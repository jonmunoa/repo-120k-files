<template>
  <section class="panel-19249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19249");
const base = ref(19249);
const total = computed(() => base.value * 2);

function incrementar19249() {
  base.value++;
}
</script>
