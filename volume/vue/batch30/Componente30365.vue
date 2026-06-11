<template>
  <section class="panel-30365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30365");
const base = ref(30365);
const total = computed(() => base.value * 2);

function incrementar30365() {
  base.value++;
}
</script>
