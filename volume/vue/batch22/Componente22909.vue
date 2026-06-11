<template>
  <section class="panel-22909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22909");
const base = ref(22909);
const total = computed(() => base.value * 2);

function incrementar22909() {
  base.value++;
}
</script>
