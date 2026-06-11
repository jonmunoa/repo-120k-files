<template>
  <section class="panel-43441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43441");
const base = ref(43441);
const total = computed(() => base.value * 2);

function incrementar43441() {
  base.value++;
}
</script>
