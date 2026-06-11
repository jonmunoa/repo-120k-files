<template>
  <section class="panel-41717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41717");
const base = ref(41717);
const total = computed(() => base.value * 2);

function incrementar41717() {
  base.value++;
}
</script>
