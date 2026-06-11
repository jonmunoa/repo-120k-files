<template>
  <section class="panel-30261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30261");
const base = ref(30261);
const total = computed(() => base.value * 2);

function incrementar30261() {
  base.value++;
}
</script>
