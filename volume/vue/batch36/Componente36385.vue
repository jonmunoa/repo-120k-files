<template>
  <section class="panel-36385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36385");
const base = ref(36385);
const total = computed(() => base.value * 2);

function incrementar36385() {
  base.value++;
}
</script>
