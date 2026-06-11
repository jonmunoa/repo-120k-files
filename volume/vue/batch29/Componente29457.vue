<template>
  <section class="panel-29457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29457");
const base = ref(29457);
const total = computed(() => base.value * 2);

function incrementar29457() {
  base.value++;
}
</script>
