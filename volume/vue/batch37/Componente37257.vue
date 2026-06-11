<template>
  <section class="panel-37257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37257");
const base = ref(37257);
const total = computed(() => base.value * 2);

function incrementar37257() {
  base.value++;
}
</script>
