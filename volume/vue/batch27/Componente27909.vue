<template>
  <section class="panel-27909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27909");
const base = ref(27909);
const total = computed(() => base.value * 2);

function incrementar27909() {
  base.value++;
}
</script>
