<template>
  <section class="panel-36417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36417");
const base = ref(36417);
const total = computed(() => base.value * 2);

function incrementar36417() {
  base.value++;
}
</script>
