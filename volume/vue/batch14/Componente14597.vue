<template>
  <section class="panel-14597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14597");
const base = ref(14597);
const total = computed(() => base.value * 2);

function incrementar14597() {
  base.value++;
}
</script>
