<template>
  <section class="panel-23281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23281");
const base = ref(23281);
const total = computed(() => base.value * 2);

function incrementar23281() {
  base.value++;
}
</script>
