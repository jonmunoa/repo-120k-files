<template>
  <section class="panel-48305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48305");
const base = ref(48305);
const total = computed(() => base.value * 2);

function incrementar48305() {
  base.value++;
}
</script>
