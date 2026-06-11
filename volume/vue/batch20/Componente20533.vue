<template>
  <section class="panel-20533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20533");
const base = ref(20533);
const total = computed(() => base.value * 2);

function incrementar20533() {
  base.value++;
}
</script>
