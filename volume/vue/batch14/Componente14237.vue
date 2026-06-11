<template>
  <section class="panel-14237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14237");
const base = ref(14237);
const total = computed(() => base.value * 2);

function incrementar14237() {
  base.value++;
}
</script>
