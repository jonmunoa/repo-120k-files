<template>
  <section class="panel-22169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22169");
const base = ref(22169);
const total = computed(() => base.value * 2);

function incrementar22169() {
  base.value++;
}
</script>
