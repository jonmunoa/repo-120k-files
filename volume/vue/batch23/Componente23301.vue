<template>
  <section class="panel-23301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23301");
const base = ref(23301);
const total = computed(() => base.value * 2);

function incrementar23301() {
  base.value++;
}
</script>
