<template>
  <section class="panel-15485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15485");
const base = ref(15485);
const total = computed(() => base.value * 2);

function incrementar15485() {
  base.value++;
}
</script>
