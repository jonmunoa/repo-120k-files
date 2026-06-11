<template>
  <section class="panel-43825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43825");
const base = ref(43825);
const total = computed(() => base.value * 2);

function incrementar43825() {
  base.value++;
}
</script>
