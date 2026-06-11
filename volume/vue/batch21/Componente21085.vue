<template>
  <section class="panel-21085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21085");
const base = ref(21085);
const total = computed(() => base.value * 2);

function incrementar21085() {
  base.value++;
}
</script>
