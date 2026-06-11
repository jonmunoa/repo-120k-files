<template>
  <section class="panel-34665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34665");
const base = ref(34665);
const total = computed(() => base.value * 2);

function incrementar34665() {
  base.value++;
}
</script>
