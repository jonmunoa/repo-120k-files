<template>
  <section class="panel-48581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48581");
const base = ref(48581);
const total = computed(() => base.value * 2);

function incrementar48581() {
  base.value++;
}
</script>
