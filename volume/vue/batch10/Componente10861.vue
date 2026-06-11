<template>
  <section class="panel-10861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10861");
const base = ref(10861);
const total = computed(() => base.value * 2);

function incrementar10861() {
  base.value++;
}
</script>
