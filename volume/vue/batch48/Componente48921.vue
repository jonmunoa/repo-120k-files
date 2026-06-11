<template>
  <section class="panel-48921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48921");
const base = ref(48921);
const total = computed(() => base.value * 2);

function incrementar48921() {
  base.value++;
}
</script>
