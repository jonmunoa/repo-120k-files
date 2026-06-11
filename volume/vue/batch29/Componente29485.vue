<template>
  <section class="panel-29485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29485");
const base = ref(29485);
const total = computed(() => base.value * 2);

function incrementar29485() {
  base.value++;
}
</script>
