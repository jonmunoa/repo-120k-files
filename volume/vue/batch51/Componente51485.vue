<template>
  <section class="panel-51485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51485");
const base = ref(51485);
const total = computed(() => base.value * 2);

function incrementar51485() {
  base.value++;
}
</script>
