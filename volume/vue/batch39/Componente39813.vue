<template>
  <section class="panel-39813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39813");
const base = ref(39813);
const total = computed(() => base.value * 2);

function incrementar39813() {
  base.value++;
}
</script>
