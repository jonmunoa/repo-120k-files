<template>
  <section class="panel-48397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48397");
const base = ref(48397);
const total = computed(() => base.value * 2);

function incrementar48397() {
  base.value++;
}
</script>
