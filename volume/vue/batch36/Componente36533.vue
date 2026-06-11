<template>
  <section class="panel-36533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36533");
const base = ref(36533);
const total = computed(() => base.value * 2);

function incrementar36533() {
  base.value++;
}
</script>
