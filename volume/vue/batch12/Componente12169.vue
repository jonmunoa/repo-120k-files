<template>
  <section class="panel-12169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12169");
const base = ref(12169);
const total = computed(() => base.value * 2);

function incrementar12169() {
  base.value++;
}
</script>
