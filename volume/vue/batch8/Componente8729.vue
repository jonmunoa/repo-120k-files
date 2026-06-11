<template>
  <section class="panel-8729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8729");
const base = ref(8729);
const total = computed(() => base.value * 2);

function incrementar8729() {
  base.value++;
}
</script>
