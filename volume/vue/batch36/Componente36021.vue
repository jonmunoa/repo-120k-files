<template>
  <section class="panel-36021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36021");
const base = ref(36021);
const total = computed(() => base.value * 2);

function incrementar36021() {
  base.value++;
}
</script>
