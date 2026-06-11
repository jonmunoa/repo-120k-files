<template>
  <section class="panel-20665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20665");
const base = ref(20665);
const total = computed(() => base.value * 2);

function incrementar20665() {
  base.value++;
}
</script>
