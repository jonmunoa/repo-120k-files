<template>
  <section class="panel-53597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53597");
const base = ref(53597);
const total = computed(() => base.value * 2);

function incrementar53597() {
  base.value++;
}
</script>
