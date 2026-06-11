<template>
  <section class="panel-24449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24449");
const base = ref(24449);
const total = computed(() => base.value * 2);

function incrementar24449() {
  base.value++;
}
</script>
