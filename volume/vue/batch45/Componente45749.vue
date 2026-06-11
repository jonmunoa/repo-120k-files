<template>
  <section class="panel-45749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45749");
const base = ref(45749);
const total = computed(() => base.value * 2);

function incrementar45749() {
  base.value++;
}
</script>
