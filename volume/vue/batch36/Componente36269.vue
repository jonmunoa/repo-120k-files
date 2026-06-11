<template>
  <section class="panel-36269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36269");
const base = ref(36269);
const total = computed(() => base.value * 2);

function incrementar36269() {
  base.value++;
}
</script>
