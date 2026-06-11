<template>
  <section class="panel-44597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44597");
const base = ref(44597);
const total = computed(() => base.value * 2);

function incrementar44597() {
  base.value++;
}
</script>
