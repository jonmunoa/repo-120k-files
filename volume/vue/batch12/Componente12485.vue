<template>
  <section class="panel-12485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12485");
const base = ref(12485);
const total = computed(() => base.value * 2);

function incrementar12485() {
  base.value++;
}
</script>
