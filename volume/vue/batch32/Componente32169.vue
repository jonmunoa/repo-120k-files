<template>
  <section class="panel-32169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32169");
const base = ref(32169);
const total = computed(() => base.value * 2);

function incrementar32169() {
  base.value++;
}
</script>
