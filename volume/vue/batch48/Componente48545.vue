<template>
  <section class="panel-48545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48545");
const base = ref(48545);
const total = computed(() => base.value * 2);

function incrementar48545() {
  base.value++;
}
</script>
