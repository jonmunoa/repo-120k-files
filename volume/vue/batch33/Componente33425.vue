<template>
  <section class="panel-33425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33425");
const base = ref(33425);
const total = computed(() => base.value * 2);

function incrementar33425() {
  base.value++;
}
</script>
