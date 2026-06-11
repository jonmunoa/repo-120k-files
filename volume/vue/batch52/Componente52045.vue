<template>
  <section class="panel-52045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52045");
const base = ref(52045);
const total = computed(() => base.value * 2);

function incrementar52045() {
  base.value++;
}
</script>
