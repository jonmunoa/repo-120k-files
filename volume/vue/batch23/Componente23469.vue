<template>
  <section class="panel-23469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23469");
const base = ref(23469);
const total = computed(() => base.value * 2);

function incrementar23469() {
  base.value++;
}
</script>
