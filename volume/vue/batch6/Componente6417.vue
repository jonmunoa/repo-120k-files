<template>
  <section class="panel-6417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6417");
const base = ref(6417);
const total = computed(() => base.value * 2);

function incrementar6417() {
  base.value++;
}
</script>
