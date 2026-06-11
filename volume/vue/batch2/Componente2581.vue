<template>
  <section class="panel-2581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2581");
const base = ref(2581);
const total = computed(() => base.value * 2);

function incrementar2581() {
  base.value++;
}
</script>
