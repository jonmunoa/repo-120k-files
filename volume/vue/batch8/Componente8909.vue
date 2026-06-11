<template>
  <section class="panel-8909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8909");
const base = ref(8909);
const total = computed(() => base.value * 2);

function incrementar8909() {
  base.value++;
}
</script>
