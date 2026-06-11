<template>
  <section class="panel-43465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43465");
const base = ref(43465);
const total = computed(() => base.value * 2);

function incrementar43465() {
  base.value++;
}
</script>
