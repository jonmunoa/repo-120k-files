<template>
  <section class="panel-31525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31525");
const base = ref(31525);
const total = computed(() => base.value * 2);

function incrementar31525() {
  base.value++;
}
</script>
