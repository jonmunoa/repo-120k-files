<template>
  <section class="panel-30597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30597");
const base = ref(30597);
const total = computed(() => base.value * 2);

function incrementar30597() {
  base.value++;
}
</script>
