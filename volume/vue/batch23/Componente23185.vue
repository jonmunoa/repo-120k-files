<template>
  <section class="panel-23185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23185");
const base = ref(23185);
const total = computed(() => base.value * 2);

function incrementar23185() {
  base.value++;
}
</script>
