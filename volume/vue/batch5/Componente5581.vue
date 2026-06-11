<template>
  <section class="panel-5581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5581");
const base = ref(5581);
const total = computed(() => base.value * 2);

function incrementar5581() {
  base.value++;
}
</script>
