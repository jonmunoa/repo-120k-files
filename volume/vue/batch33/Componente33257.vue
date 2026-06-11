<template>
  <section class="panel-33257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33257");
const base = ref(33257);
const total = computed(() => base.value * 2);

function incrementar33257() {
  base.value++;
}
</script>
