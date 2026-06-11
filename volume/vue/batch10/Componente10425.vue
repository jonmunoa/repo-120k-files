<template>
  <section class="panel-10425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10425");
const base = ref(10425);
const total = computed(() => base.value * 2);

function incrementar10425() {
  base.value++;
}
</script>
