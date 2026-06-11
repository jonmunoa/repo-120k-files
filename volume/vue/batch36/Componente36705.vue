<template>
  <section class="panel-36705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36705");
const base = ref(36705);
const total = computed(() => base.value * 2);

function incrementar36705() {
  base.value++;
}
</script>
