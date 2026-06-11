<template>
  <section class="panel-30717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30717");
const base = ref(30717);
const total = computed(() => base.value * 2);

function incrementar30717() {
  base.value++;
}
</script>
