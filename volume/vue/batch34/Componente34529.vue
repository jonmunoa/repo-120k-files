<template>
  <section class="panel-34529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34529");
const base = ref(34529);
const total = computed(() => base.value * 2);

function incrementar34529() {
  base.value++;
}
</script>
