<template>
  <section class="panel-21049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21049");
const base = ref(21049);
const total = computed(() => base.value * 2);

function incrementar21049() {
  base.value++;
}
</script>
