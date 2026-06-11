<template>
  <section class="panel-16045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16045");
const base = ref(16045);
const total = computed(() => base.value * 2);

function incrementar16045() {
  base.value++;
}
</script>
