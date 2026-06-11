<template>
  <section class="panel-23565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23565");
const base = ref(23565);
const total = computed(() => base.value * 2);

function incrementar23565() {
  base.value++;
}
</script>
