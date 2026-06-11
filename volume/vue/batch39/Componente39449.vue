<template>
  <section class="panel-39449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39449");
const base = ref(39449);
const total = computed(() => base.value * 2);

function incrementar39449() {
  base.value++;
}
</script>
