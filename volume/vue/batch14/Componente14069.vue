<template>
  <section class="panel-14069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14069");
const base = ref(14069);
const total = computed(() => base.value * 2);

function incrementar14069() {
  base.value++;
}
</script>
