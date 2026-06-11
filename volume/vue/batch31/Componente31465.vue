<template>
  <section class="panel-31465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31465");
const base = ref(31465);
const total = computed(() => base.value * 2);

function incrementar31465() {
  base.value++;
}
</script>
