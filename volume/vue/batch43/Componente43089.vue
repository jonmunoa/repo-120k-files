<template>
  <section class="panel-43089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43089");
const base = ref(43089);
const total = computed(() => base.value * 2);

function incrementar43089() {
  base.value++;
}
</script>
