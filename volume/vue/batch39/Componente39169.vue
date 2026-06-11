<template>
  <section class="panel-39169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39169");
const base = ref(39169);
const total = computed(() => base.value * 2);

function incrementar39169() {
  base.value++;
}
</script>
