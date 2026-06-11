<template>
  <section class="panel-2149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2149");
const base = ref(2149);
const total = computed(() => base.value * 2);

function incrementar2149() {
  base.value++;
}
</script>
