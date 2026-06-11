<template>
  <section class="panel-13909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13909");
const base = ref(13909);
const total = computed(() => base.value * 2);

function incrementar13909() {
  base.value++;
}
</script>
