<template>
  <section class="panel-19957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19957");
const base = ref(19957);
const total = computed(() => base.value * 2);

function incrementar19957() {
  base.value++;
}
</script>
