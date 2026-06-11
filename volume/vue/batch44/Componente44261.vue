<template>
  <section class="panel-44261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44261");
const base = ref(44261);
const total = computed(() => base.value * 2);

function incrementar44261() {
  base.value++;
}
</script>
