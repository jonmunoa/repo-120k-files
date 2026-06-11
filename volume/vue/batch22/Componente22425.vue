<template>
  <section class="panel-22425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22425");
const base = ref(22425);
const total = computed(() => base.value * 2);

function incrementar22425() {
  base.value++;
}
</script>
