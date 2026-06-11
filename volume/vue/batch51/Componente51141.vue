<template>
  <section class="panel-51141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51141");
const base = ref(51141);
const total = computed(() => base.value * 2);

function incrementar51141() {
  base.value++;
}
</script>
