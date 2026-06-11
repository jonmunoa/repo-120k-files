<template>
  <section class="panel-41269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41269");
const base = ref(41269);
const total = computed(() => base.value * 2);

function incrementar41269() {
  base.value++;
}
</script>
