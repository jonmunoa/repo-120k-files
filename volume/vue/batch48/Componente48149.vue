<template>
  <section class="panel-48149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48149");
const base = ref(48149);
const total = computed(() => base.value * 2);

function incrementar48149() {
  base.value++;
}
</script>
