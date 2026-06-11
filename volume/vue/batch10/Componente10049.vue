<template>
  <section class="panel-10049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10049");
const base = ref(10049);
const total = computed(() => base.value * 2);

function incrementar10049() {
  base.value++;
}
</script>
