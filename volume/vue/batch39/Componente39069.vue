<template>
  <section class="panel-39069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39069");
const base = ref(39069);
const total = computed(() => base.value * 2);

function incrementar39069() {
  base.value++;
}
</script>
