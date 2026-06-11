<template>
  <section class="panel-19417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19417");
const base = ref(19417);
const total = computed(() => base.value * 2);

function incrementar19417() {
  base.value++;
}
</script>
