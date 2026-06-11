<template>
  <section class="panel-52665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52665");
const base = ref(52665);
const total = computed(() => base.value * 2);

function incrementar52665() {
  base.value++;
}
</script>
