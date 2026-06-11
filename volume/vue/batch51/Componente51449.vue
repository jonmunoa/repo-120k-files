<template>
  <section class="panel-51449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51449");
const base = ref(51449);
const total = computed(() => base.value * 2);

function incrementar51449() {
  base.value++;
}
</script>
