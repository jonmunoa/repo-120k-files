<template>
  <section class="panel-43789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43789");
const base = ref(43789);
const total = computed(() => base.value * 2);

function incrementar43789() {
  base.value++;
}
</script>
