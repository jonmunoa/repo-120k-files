<template>
  <section class="panel-5417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5417");
const base = ref(5417);
const total = computed(() => base.value * 2);

function incrementar5417() {
  base.value++;
}
</script>
