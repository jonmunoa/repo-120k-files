<template>
  <section class="panel-23825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23825");
const base = ref(23825);
const total = computed(() => base.value * 2);

function incrementar23825() {
  base.value++;
}
</script>
