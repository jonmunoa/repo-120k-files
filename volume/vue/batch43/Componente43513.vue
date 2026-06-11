<template>
  <section class="panel-43513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43513");
const base = ref(43513);
const total = computed(() => base.value * 2);

function incrementar43513() {
  base.value++;
}
</script>
