<template>
  <section class="panel-37085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37085");
const base = ref(37085);
const total = computed(() => base.value * 2);

function incrementar37085() {
  base.value++;
}
</script>
