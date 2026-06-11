<template>
  <section class="panel-33417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33417");
const base = ref(33417);
const total = computed(() => base.value * 2);

function incrementar33417() {
  base.value++;
}
</script>
