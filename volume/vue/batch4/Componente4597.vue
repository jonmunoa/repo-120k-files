<template>
  <section class="panel-4597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4597");
const base = ref(4597);
const total = computed(() => base.value * 2);

function incrementar4597() {
  base.value++;
}
</script>
