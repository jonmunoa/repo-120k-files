<template>
  <section class="panel-22465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22465");
const base = ref(22465);
const total = computed(() => base.value * 2);

function incrementar22465() {
  base.value++;
}
</script>
