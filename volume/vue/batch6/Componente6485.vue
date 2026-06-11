<template>
  <section class="panel-6485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6485");
const base = ref(6485);
const total = computed(() => base.value * 2);

function incrementar6485() {
  base.value++;
}
</script>
