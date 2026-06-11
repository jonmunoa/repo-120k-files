<template>
  <section class="panel-37597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37597");
const base = ref(37597);
const total = computed(() => base.value * 2);

function incrementar37597() {
  base.value++;
}
</script>
