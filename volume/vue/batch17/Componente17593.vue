<template>
  <section class="panel-17593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17593");
const base = ref(17593);
const total = computed(() => base.value * 2);

function incrementar17593() {
  base.value++;
}
</script>
