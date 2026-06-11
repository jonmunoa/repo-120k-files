<template>
  <section class="panel-48045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48045");
const base = ref(48045);
const total = computed(() => base.value * 2);

function incrementar48045() {
  base.value++;
}
</script>
