<template>
  <section class="panel-39261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39261");
const base = ref(39261);
const total = computed(() => base.value * 2);

function incrementar39261() {
  base.value++;
}
</script>
