<template>
  <section class="panel-2909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2909");
const base = ref(2909);
const total = computed(() => base.value * 2);

function incrementar2909() {
  base.value++;
}
</script>
