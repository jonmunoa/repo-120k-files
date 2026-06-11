<template>
  <section class="panel-22881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22881");
const base = ref(22881);
const total = computed(() => base.value * 2);

function incrementar22881() {
  base.value++;
}
</script>
