<template>
  <section class="panel-31129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31129");
const base = ref(31129);
const total = computed(() => base.value * 2);

function incrementar31129() {
  base.value++;
}
</script>
