<template>
  <section class="panel-48693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48693");
const base = ref(48693);
const total = computed(() => base.value * 2);

function incrementar48693() {
  base.value++;
}
</script>
