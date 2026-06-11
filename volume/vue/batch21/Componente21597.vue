<template>
  <section class="panel-21597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21597");
const base = ref(21597);
const total = computed(() => base.value * 2);

function incrementar21597() {
  base.value++;
}
</script>
