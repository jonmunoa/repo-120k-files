<template>
  <section class="panel-54589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54589");
const base = ref(54589);
const total = computed(() => base.value * 2);

function incrementar54589() {
  base.value++;
}
</script>
