<template>
  <section class="panel-23117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23117");
const base = ref(23117);
const total = computed(() => base.value * 2);

function incrementar23117() {
  base.value++;
}
</script>
