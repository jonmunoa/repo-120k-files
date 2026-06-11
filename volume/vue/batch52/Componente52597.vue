<template>
  <section class="panel-52597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52597");
const base = ref(52597);
const total = computed(() => base.value * 2);

function incrementar52597() {
  base.value++;
}
</script>
