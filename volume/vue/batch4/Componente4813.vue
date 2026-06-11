<template>
  <section class="panel-4813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4813");
const base = ref(4813);
const total = computed(() => base.value * 2);

function incrementar4813() {
  base.value++;
}
</script>
