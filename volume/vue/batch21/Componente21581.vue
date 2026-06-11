<template>
  <section class="panel-21581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21581");
const base = ref(21581);
const total = computed(() => base.value * 2);

function incrementar21581() {
  base.value++;
}
</script>
