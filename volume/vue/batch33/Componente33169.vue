<template>
  <section class="panel-33169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33169");
const base = ref(33169);
const total = computed(() => base.value * 2);

function incrementar33169() {
  base.value++;
}
</script>
