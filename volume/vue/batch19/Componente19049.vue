<template>
  <section class="panel-19049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19049");
const base = ref(19049);
const total = computed(() => base.value * 2);

function incrementar19049() {
  base.value++;
}
</script>
