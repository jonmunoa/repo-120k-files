<template>
  <section class="panel-10949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10949");
const base = ref(10949);
const total = computed(() => base.value * 2);

function incrementar10949() {
  base.value++;
}
</script>
