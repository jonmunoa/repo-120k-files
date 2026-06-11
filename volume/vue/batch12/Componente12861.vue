<template>
  <section class="panel-12861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12861");
const base = ref(12861);
const total = computed(() => base.value * 2);

function incrementar12861() {
  base.value++;
}
</script>
