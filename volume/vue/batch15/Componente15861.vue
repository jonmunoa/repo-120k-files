<template>
  <section class="panel-15861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15861");
const base = ref(15861);
const total = computed(() => base.value * 2);

function incrementar15861() {
  base.value++;
}
</script>
