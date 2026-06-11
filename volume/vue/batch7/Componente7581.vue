<template>
  <section class="panel-7581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7581");
const base = ref(7581);
const total = computed(() => base.value * 2);

function incrementar7581() {
  base.value++;
}
</script>
