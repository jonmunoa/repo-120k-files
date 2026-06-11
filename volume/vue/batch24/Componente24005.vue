<template>
  <section class="panel-24005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24005");
const base = ref(24005);
const total = computed(() => base.value * 2);

function incrementar24005() {
  base.value++;
}
</script>
