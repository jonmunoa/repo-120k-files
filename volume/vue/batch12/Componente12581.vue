<template>
  <section class="panel-12581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12581");
const base = ref(12581);
const total = computed(() => base.value * 2);

function incrementar12581() {
  base.value++;
}
</script>
