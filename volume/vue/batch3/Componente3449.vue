<template>
  <section class="panel-3449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3449");
const base = ref(3449);
const total = computed(() => base.value * 2);

function incrementar3449() {
  base.value++;
}
</script>
