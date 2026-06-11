<template>
  <section class="panel-54089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54089");
const base = ref(54089);
const total = computed(() => base.value * 2);

function incrementar54089() {
  base.value++;
}
</script>
