<template>
  <section class="panel-24425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24425");
const base = ref(24425);
const total = computed(() => base.value * 2);

function incrementar24425() {
  base.value++;
}
</script>
