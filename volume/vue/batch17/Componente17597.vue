<template>
  <section class="panel-17597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17597");
const base = ref(17597);
const total = computed(() => base.value * 2);

function incrementar17597() {
  base.value++;
}
</script>
