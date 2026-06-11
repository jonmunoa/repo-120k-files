<template>
  <section class="panel-23693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23693");
const base = ref(23693);
const total = computed(() => base.value * 2);

function incrementar23693() {
  base.value++;
}
</script>
