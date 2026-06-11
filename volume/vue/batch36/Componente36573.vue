<template>
  <section class="panel-36573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36573");
const base = ref(36573);
const total = computed(() => base.value * 2);

function incrementar36573() {
  base.value++;
}
</script>
