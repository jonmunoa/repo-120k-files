<template>
  <section class="panel-1049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1049");
const base = ref(1049);
const total = computed(() => base.value * 2);

function incrementar1049() {
  base.value++;
}
</script>
