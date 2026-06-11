<template>
  <section class="panel-29629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29629");
const base = ref(29629);
const total = computed(() => base.value * 2);

function incrementar29629() {
  base.value++;
}
</script>
