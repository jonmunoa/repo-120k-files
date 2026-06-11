<template>
  <section class="panel-13169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13169");
const base = ref(13169);
const total = computed(() => base.value * 2);

function incrementar13169() {
  base.value++;
}
</script>
