<template>
  <section class="panel-56069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56069");
const base = ref(56069);
const total = computed(() => base.value * 2);

function incrementar56069() {
  base.value++;
}
</script>
