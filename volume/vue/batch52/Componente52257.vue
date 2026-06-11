<template>
  <section class="panel-52257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52257");
const base = ref(52257);
const total = computed(() => base.value * 2);

function incrementar52257() {
  base.value++;
}
</script>
