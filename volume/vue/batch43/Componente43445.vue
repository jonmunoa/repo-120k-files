<template>
  <section class="panel-43445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43445");
const base = ref(43445);
const total = computed(() => base.value * 2);

function incrementar43445() {
  base.value++;
}
</script>
