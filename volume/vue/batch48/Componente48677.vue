<template>
  <section class="panel-48677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48677");
const base = ref(48677);
const total = computed(() => base.value * 2);

function incrementar48677() {
  base.value++;
}
</script>
