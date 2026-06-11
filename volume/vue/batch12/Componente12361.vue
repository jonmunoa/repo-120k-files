<template>
  <section class="panel-12361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12361");
const base = ref(12361);
const total = computed(() => base.value * 2);

function incrementar12361() {
  base.value++;
}
</script>
