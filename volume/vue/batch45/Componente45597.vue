<template>
  <section class="panel-45597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45597");
const base = ref(45597);
const total = computed(() => base.value * 2);

function incrementar45597() {
  base.value++;
}
</script>
