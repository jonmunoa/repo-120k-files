<template>
  <section class="panel-12069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12069");
const base = ref(12069);
const total = computed(() => base.value * 2);

function incrementar12069() {
  base.value++;
}
</script>
