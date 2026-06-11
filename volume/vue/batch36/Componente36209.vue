<template>
  <section class="panel-36209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36209");
const base = ref(36209);
const total = computed(() => base.value * 2);

function incrementar36209() {
  base.value++;
}
</script>
