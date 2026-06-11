<template>
  <section class="panel-8129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8129");
const base = ref(8129);
const total = computed(() => base.value * 2);

function incrementar8129() {
  base.value++;
}
</script>
