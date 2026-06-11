<template>
  <section class="panel-6937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6937");
const base = ref(6937);
const total = computed(() => base.value * 2);

function incrementar6937() {
  base.value++;
}
</script>
