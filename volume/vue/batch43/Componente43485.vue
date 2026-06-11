<template>
  <section class="panel-43485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43485");
const base = ref(43485);
const total = computed(() => base.value * 2);

function incrementar43485() {
  base.value++;
}
</script>
