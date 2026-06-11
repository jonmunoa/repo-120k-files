<template>
  <section class="panel-41813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41813");
const base = ref(41813);
const total = computed(() => base.value * 2);

function incrementar41813() {
  base.value++;
}
</script>
