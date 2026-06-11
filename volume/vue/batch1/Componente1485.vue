<template>
  <section class="panel-1485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1485");
const base = ref(1485);
const total = computed(() => base.value * 2);

function incrementar1485() {
  base.value++;
}
</script>
