<template>
  <section class="panel-12417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12417");
const base = ref(12417);
const total = computed(() => base.value * 2);

function incrementar12417() {
  base.value++;
}
</script>
