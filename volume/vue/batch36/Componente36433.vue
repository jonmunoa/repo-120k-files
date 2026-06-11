<template>
  <section class="panel-36433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36433");
const base = ref(36433);
const total = computed(() => base.value * 2);

function incrementar36433() {
  base.value++;
}
</script>
