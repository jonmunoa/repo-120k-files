<template>
  <section class="panel-45717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45717");
const base = ref(45717);
const total = computed(() => base.value * 2);

function incrementar45717() {
  base.value++;
}
</script>
