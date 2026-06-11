<template>
  <section class="panel-37949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37949");
const base = ref(37949);
const total = computed(() => base.value * 2);

function incrementar37949() {
  base.value++;
}
</script>
