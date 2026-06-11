<template>
  <section class="panel-1469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1469");
const base = ref(1469);
const total = computed(() => base.value * 2);

function incrementar1469() {
  base.value++;
}
</script>
