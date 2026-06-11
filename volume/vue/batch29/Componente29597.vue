<template>
  <section class="panel-29597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29597");
const base = ref(29597);
const total = computed(() => base.value * 2);

function incrementar29597() {
  base.value++;
}
</script>
