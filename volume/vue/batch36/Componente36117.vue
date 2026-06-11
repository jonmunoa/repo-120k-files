<template>
  <section class="panel-36117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36117");
const base = ref(36117);
const total = computed(() => base.value * 2);

function incrementar36117() {
  base.value++;
}
</script>
