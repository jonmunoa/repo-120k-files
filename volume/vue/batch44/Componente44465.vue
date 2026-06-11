<template>
  <section class="panel-44465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44465");
const base = ref(44465);
const total = computed(() => base.value * 2);

function incrementar44465() {
  base.value++;
}
</script>
