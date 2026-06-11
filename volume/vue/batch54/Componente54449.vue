<template>
  <section class="panel-54449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54449");
const base = ref(54449);
const total = computed(() => base.value * 2);

function incrementar54449() {
  base.value++;
}
</script>
