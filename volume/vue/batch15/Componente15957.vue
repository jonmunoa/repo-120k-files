<template>
  <section class="panel-15957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15957");
const base = ref(15957);
const total = computed(() => base.value * 2);

function incrementar15957() {
  base.value++;
}
</script>
