<template>
  <section class="panel-43417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43417");
const base = ref(43417);
const total = computed(() => base.value * 2);

function incrementar43417() {
  base.value++;
}
</script>
