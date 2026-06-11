<template>
  <section class="panel-34581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34581");
const base = ref(34581);
const total = computed(() => base.value * 2);

function incrementar34581() {
  base.value++;
}
</script>
