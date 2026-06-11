<template>
  <section class="panel-42425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42425");
const base = ref(42425);
const total = computed(() => base.value * 2);

function incrementar42425() {
  base.value++;
}
</script>
