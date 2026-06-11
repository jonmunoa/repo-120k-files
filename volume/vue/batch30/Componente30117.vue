<template>
  <section class="panel-30117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30117");
const base = ref(30117);
const total = computed(() => base.value * 2);

function incrementar30117() {
  base.value++;
}
</script>
