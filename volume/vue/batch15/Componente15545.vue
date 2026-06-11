<template>
  <section class="panel-15545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15545");
const base = ref(15545);
const total = computed(() => base.value * 2);

function incrementar15545() {
  base.value++;
}
</script>
