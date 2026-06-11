<template>
  <section class="panel-43261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43261");
const base = ref(43261);
const total = computed(() => base.value * 2);

function incrementar43261() {
  base.value++;
}
</script>
