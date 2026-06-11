<template>
  <section class="panel-16425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16425");
const base = ref(16425);
const total = computed(() => base.value * 2);

function incrementar16425() {
  base.value++;
}
</script>
