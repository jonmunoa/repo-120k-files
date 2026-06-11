<template>
  <section class="panel-12681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12681");
const base = ref(12681);
const total = computed(() => base.value * 2);

function incrementar12681() {
  base.value++;
}
</script>
