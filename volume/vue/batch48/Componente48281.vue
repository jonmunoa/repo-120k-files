<template>
  <section class="panel-48281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48281");
const base = ref(48281);
const total = computed(() => base.value * 2);

function incrementar48281() {
  base.value++;
}
</script>
