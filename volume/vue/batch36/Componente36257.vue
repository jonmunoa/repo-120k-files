<template>
  <section class="panel-36257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36257");
const base = ref(36257);
const total = computed(() => base.value * 2);

function incrementar36257() {
  base.value++;
}
</script>
