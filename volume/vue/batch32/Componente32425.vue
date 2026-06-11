<template>
  <section class="panel-32425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32425");
const base = ref(32425);
const total = computed(() => base.value * 2);

function incrementar32425() {
  base.value++;
}
</script>
