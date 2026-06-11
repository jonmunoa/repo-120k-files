<template>
  <section class="panel-15465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15465");
const base = ref(15465);
const total = computed(() => base.value * 2);

function incrementar15465() {
  base.value++;
}
</script>
