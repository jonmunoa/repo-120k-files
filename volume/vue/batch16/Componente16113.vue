<template>
  <section class="panel-16113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16113");
const base = ref(16113);
const total = computed(() => base.value * 2);

function incrementar16113() {
  base.value++;
}
</script>
