<template>
  <section class="panel-34169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34169");
const base = ref(34169);
const total = computed(() => base.value * 2);

function incrementar34169() {
  base.value++;
}
</script>
