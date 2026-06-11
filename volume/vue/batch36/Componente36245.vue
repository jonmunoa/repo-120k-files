<template>
  <section class="panel-36245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36245");
const base = ref(36245);
const total = computed(() => base.value * 2);

function incrementar36245() {
  base.value++;
}
</script>
