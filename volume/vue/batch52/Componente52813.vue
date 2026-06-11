<template>
  <section class="panel-52813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52813");
const base = ref(52813);
const total = computed(() => base.value * 2);

function incrementar52813() {
  base.value++;
}
</script>
