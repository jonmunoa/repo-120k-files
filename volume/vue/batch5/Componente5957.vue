<template>
  <section class="panel-5957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5957");
const base = ref(5957);
const total = computed(() => base.value * 2);

function incrementar5957() {
  base.value++;
}
</script>
