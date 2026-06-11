<template>
  <section class="panel-8437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8437");
const base = ref(8437);
const total = computed(() => base.value * 2);

function incrementar8437() {
  base.value++;
}
</script>
