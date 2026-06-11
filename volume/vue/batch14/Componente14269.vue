<template>
  <section class="panel-14269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14269");
const base = ref(14269);
const total = computed(() => base.value * 2);

function incrementar14269() {
  base.value++;
}
</script>
