<template>
  <section class="panel-52593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52593");
const base = ref(52593);
const total = computed(() => base.value * 2);

function incrementar52593() {
  base.value++;
}
</script>
