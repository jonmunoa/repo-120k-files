<template>
  <section class="panel-2957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2957");
const base = ref(2957);
const total = computed(() => base.value * 2);

function incrementar2957() {
  base.value++;
}
</script>
