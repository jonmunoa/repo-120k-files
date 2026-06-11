<template>
  <section class="panel-47725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47725");
const base = ref(47725);
const total = computed(() => base.value * 2);

function incrementar47725() {
  base.value++;
}
</script>
