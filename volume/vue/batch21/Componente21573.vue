<template>
  <section class="panel-21573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21573");
const base = ref(21573);
const total = computed(() => base.value * 2);

function incrementar21573() {
  base.value++;
}
</script>
