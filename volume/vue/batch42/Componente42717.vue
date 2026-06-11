<template>
  <section class="panel-42717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42717");
const base = ref(42717);
const total = computed(() => base.value * 2);

function incrementar42717() {
  base.value++;
}
</script>
