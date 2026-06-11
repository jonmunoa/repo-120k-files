<template>
  <section class="panel-29417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29417");
const base = ref(29417);
const total = computed(() => base.value * 2);

function incrementar29417() {
  base.value++;
}
</script>
