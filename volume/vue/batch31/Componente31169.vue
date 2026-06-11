<template>
  <section class="panel-31169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31169");
const base = ref(31169);
const total = computed(() => base.value * 2);

function incrementar31169() {
  base.value++;
}
</script>
