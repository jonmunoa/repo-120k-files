<template>
  <section class="panel-13957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13957");
const base = ref(13957);
const total = computed(() => base.value * 2);

function incrementar13957() {
  base.value++;
}
</script>
