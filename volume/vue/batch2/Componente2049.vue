<template>
  <section class="panel-2049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2049");
const base = ref(2049);
const total = computed(() => base.value * 2);

function incrementar2049() {
  base.value++;
}
</script>
