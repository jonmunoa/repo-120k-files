<template>
  <section class="panel-53049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53049");
const base = ref(53049);
const total = computed(() => base.value * 2);

function incrementar53049() {
  base.value++;
}
</script>
