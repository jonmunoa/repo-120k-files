<template>
  <section class="panel-8173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8173");
const base = ref(8173);
const total = computed(() => base.value * 2);

function incrementar8173() {
  base.value++;
}
</script>
