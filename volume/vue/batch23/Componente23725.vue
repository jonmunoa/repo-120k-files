<template>
  <section class="panel-23725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23725");
const base = ref(23725);
const total = computed(() => base.value * 2);

function incrementar23725() {
  base.value++;
}
</script>
