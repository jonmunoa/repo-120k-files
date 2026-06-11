<template>
  <section class="panel-51169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51169");
const base = ref(51169);
const total = computed(() => base.value * 2);

function incrementar51169() {
  base.value++;
}
</script>
