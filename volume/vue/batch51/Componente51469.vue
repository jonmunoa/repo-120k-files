<template>
  <section class="panel-51469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51469");
const base = ref(51469);
const total = computed(() => base.value * 2);

function incrementar51469() {
  base.value++;
}
</script>
