<template>
  <section class="panel-16789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16789");
const base = ref(16789);
const total = computed(() => base.value * 2);

function incrementar16789() {
  base.value++;
}
</script>
