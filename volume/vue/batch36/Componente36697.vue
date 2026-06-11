<template>
  <section class="panel-36697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36697");
const base = ref(36697);
const total = computed(() => base.value * 2);

function incrementar36697() {
  base.value++;
}
</script>
