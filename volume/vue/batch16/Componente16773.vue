<template>
  <section class="panel-16773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16773");
const base = ref(16773);
const total = computed(() => base.value * 2);

function incrementar16773() {
  base.value++;
}
</script>
