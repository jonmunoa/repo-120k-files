<template>
  <section class="panel-8885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8885");
const base = ref(8885);
const total = computed(() => base.value * 2);

function incrementar8885() {
  base.value++;
}
</script>
