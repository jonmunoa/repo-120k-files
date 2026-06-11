<template>
  <section class="panel-21221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21221");
const base = ref(21221);
const total = computed(() => base.value * 2);

function incrementar21221() {
  base.value++;
}
</script>
