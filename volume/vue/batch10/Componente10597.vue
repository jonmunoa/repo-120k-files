<template>
  <section class="panel-10597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10597");
const base = ref(10597);
const total = computed(() => base.value * 2);

function incrementar10597() {
  base.value++;
}
</script>
