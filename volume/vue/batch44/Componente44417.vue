<template>
  <section class="panel-44417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44417");
const base = ref(44417);
const total = computed(() => base.value * 2);

function incrementar44417() {
  base.value++;
}
</script>
