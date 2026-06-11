<template>
  <section class="panel-52957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52957");
const base = ref(52957);
const total = computed(() => base.value * 2);

function incrementar52957() {
  base.value++;
}
</script>
