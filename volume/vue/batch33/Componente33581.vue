<template>
  <section class="panel-33581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33581");
const base = ref(33581);
const total = computed(() => base.value * 2);

function incrementar33581() {
  base.value++;
}
</script>
