<template>
  <section class="panel-1597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1597");
const base = ref(1597);
const total = computed(() => base.value * 2);

function incrementar1597() {
  base.value++;
}
</script>
