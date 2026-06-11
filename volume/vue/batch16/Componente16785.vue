<template>
  <section class="panel-16785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16785");
const base = ref(16785);
const total = computed(() => base.value * 2);

function incrementar16785() {
  base.value++;
}
</script>
