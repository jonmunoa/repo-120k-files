<template>
  <section class="panel-50069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50069");
const base = ref(50069);
const total = computed(() => base.value * 2);

function incrementar50069() {
  base.value++;
}
</script>
