<template>
  <section class="panel-34909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34909");
const base = ref(34909);
const total = computed(() => base.value * 2);

function incrementar34909() {
  base.value++;
}
</script>
