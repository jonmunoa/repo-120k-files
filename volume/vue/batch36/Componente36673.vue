<template>
  <section class="panel-36673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36673");
const base = ref(36673);
const total = computed(() => base.value * 2);

function incrementar36673() {
  base.value++;
}
</script>
