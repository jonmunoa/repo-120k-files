<template>
  <section class="panel-43717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43717");
const base = ref(43717);
const total = computed(() => base.value * 2);

function incrementar43717() {
  base.value++;
}
</script>
