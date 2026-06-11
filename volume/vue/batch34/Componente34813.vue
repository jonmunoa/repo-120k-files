<template>
  <section class="panel-34813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34813");
const base = ref(34813);
const total = computed(() => base.value * 2);

function incrementar34813() {
  base.value++;
}
</script>
