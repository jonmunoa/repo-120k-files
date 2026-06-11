<template>
  <section class="panel-7909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7909");
const base = ref(7909);
const total = computed(() => base.value * 2);

function incrementar7909() {
  base.value++;
}
</script>
