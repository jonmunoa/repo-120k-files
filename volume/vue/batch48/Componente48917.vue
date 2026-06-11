<template>
  <section class="panel-48917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48917");
const base = ref(48917);
const total = computed(() => base.value * 2);

function incrementar48917() {
  base.value++;
}
</script>
