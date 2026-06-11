<template>
  <section class="panel-7545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7545");
const base = ref(7545);
const total = computed(() => base.value * 2);

function incrementar7545() {
  base.value++;
}
</script>
