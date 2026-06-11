<template>
  <section class="panel-48861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48861");
const base = ref(48861);
const total = computed(() => base.value * 2);

function incrementar48861() {
  base.value++;
}
</script>
