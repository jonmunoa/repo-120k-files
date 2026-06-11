<template>
  <section class="panel-14549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14549");
const base = ref(14549);
const total = computed(() => base.value * 2);

function incrementar14549() {
  base.value++;
}
</script>
