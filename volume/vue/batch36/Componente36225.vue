<template>
  <section class="panel-36225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36225");
const base = ref(36225);
const total = computed(() => base.value * 2);

function incrementar36225() {
  base.value++;
}
</script>
