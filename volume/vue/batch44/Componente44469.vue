<template>
  <section class="panel-44469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44469");
const base = ref(44469);
const total = computed(() => base.value * 2);

function incrementar44469() {
  base.value++;
}
</script>
