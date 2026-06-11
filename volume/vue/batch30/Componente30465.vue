<template>
  <section class="panel-30465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30465");
const base = ref(30465);
const total = computed(() => base.value * 2);

function incrementar30465() {
  base.value++;
}
</script>
