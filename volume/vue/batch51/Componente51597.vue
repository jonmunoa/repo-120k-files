<template>
  <section class="panel-51597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51597");
const base = ref(51597);
const total = computed(() => base.value * 2);

function incrementar51597() {
  base.value++;
}
</script>
