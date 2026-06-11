<template>
  <section class="panel-23837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23837");
const base = ref(23837);
const total = computed(() => base.value * 2);

function incrementar23837() {
  base.value++;
}
</script>
