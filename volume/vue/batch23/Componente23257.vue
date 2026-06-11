<template>
  <section class="panel-23257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23257");
const base = ref(23257);
const total = computed(() => base.value * 2);

function incrementar23257() {
  base.value++;
}
</script>
