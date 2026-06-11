<template>
  <section class="panel-48717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48717");
const base = ref(48717);
const total = computed(() => base.value * 2);

function incrementar48717() {
  base.value++;
}
</script>
