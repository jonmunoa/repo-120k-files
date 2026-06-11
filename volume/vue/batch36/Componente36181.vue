<template>
  <section class="panel-36181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36181");
const base = ref(36181);
const total = computed(() => base.value * 2);

function incrementar36181() {
  base.value++;
}
</script>
