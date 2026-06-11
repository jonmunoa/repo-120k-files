<template>
  <section class="panel-32417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32417");
const base = ref(32417);
const total = computed(() => base.value * 2);

function incrementar32417() {
  base.value++;
}
</script>
