<template>
  <section class="panel-52485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52485");
const base = ref(52485);
const total = computed(() => base.value * 2);

function incrementar52485() {
  base.value++;
}
</script>
