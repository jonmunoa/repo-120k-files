<template>
  <section class="panel-17485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17485");
const base = ref(17485);
const total = computed(() => base.value * 2);

function incrementar17485() {
  base.value++;
}
</script>
