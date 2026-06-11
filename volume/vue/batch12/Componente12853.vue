<template>
  <section class="panel-12853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12853");
const base = ref(12853);
const total = computed(() => base.value * 2);

function incrementar12853() {
  base.value++;
}
</script>
