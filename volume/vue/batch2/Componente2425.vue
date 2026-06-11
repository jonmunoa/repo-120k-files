<template>
  <section class="panel-2425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2425");
const base = ref(2425);
const total = computed(() => base.value * 2);

function incrementar2425() {
  base.value++;
}
</script>
