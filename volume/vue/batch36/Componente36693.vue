<template>
  <section class="panel-36693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36693");
const base = ref(36693);
const total = computed(() => base.value * 2);

function incrementar36693() {
  base.value++;
}
</script>
