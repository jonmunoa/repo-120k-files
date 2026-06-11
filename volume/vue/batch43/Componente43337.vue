<template>
  <section class="panel-43337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43337");
const base = ref(43337);
const total = computed(() => base.value * 2);

function incrementar43337() {
  base.value++;
}
</script>
