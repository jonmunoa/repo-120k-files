<template>
  <section class="panel-36161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36161");
const base = ref(36161);
const total = computed(() => base.value * 2);

function incrementar36161() {
  base.value++;
}
</script>
