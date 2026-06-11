<template>
  <section class="panel-23417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23417");
const base = ref(23417);
const total = computed(() => base.value * 2);

function incrementar23417() {
  base.value++;
}
</script>
