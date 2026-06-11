<template>
  <section class="panel-16861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16861");
const base = ref(16861);
const total = computed(() => base.value * 2);

function incrementar16861() {
  base.value++;
}
</script>
