<template>
  <section class="panel-30485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30485");
const base = ref(30485);
const total = computed(() => base.value * 2);

function incrementar30485() {
  base.value++;
}
</script>
