<template>
  <section class="panel-38957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38957");
const base = ref(38957);
const total = computed(() => base.value * 2);

function incrementar38957() {
  base.value++;
}
</script>
