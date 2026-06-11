<template>
  <section class="panel-24793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24793");
const base = ref(24793);
const total = computed(() => base.value * 2);

function incrementar24793() {
  base.value++;
}
</script>
