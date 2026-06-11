<template>
  <section class="panel-16693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16693");
const base = ref(16693);
const total = computed(() => base.value * 2);

function incrementar16693() {
  base.value++;
}
</script>
