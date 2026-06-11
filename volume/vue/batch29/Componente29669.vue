<template>
  <section class="panel-29669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29669");
const base = ref(29669);
const total = computed(() => base.value * 2);

function incrementar29669() {
  base.value++;
}
</script>
