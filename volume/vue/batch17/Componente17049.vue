<template>
  <section class="panel-17049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17049");
const base = ref(17049);
const total = computed(() => base.value * 2);

function incrementar17049() {
  base.value++;
}
</script>
