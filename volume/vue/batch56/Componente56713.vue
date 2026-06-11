<template>
  <section class="panel-56713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56713");
const base = ref(56713);
const total = computed(() => base.value * 2);

function incrementar56713() {
  base.value++;
}
</script>
