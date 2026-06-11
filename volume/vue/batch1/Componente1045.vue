<template>
  <section class="panel-1045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1045");
const base = ref(1045);
const total = computed(() => base.value * 2);

function incrementar1045() {
  base.value++;
}
</script>
