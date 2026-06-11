<template>
  <section class="panel-36589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36589");
const base = ref(36589);
const total = computed(() => base.value * 2);

function incrementar36589() {
  base.value++;
}
</script>
