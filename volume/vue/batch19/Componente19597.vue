<template>
  <section class="panel-19597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19597");
const base = ref(19597);
const total = computed(() => base.value * 2);

function incrementar19597() {
  base.value++;
}
</script>
