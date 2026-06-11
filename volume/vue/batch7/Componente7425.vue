<template>
  <section class="panel-7425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7425");
const base = ref(7425);
const total = computed(() => base.value * 2);

function incrementar7425() {
  base.value++;
}
</script>
