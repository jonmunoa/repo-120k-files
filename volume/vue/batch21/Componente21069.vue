<template>
  <section class="panel-21069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21069");
const base = ref(21069);
const total = computed(() => base.value * 2);

function incrementar21069() {
  base.value++;
}
</script>
