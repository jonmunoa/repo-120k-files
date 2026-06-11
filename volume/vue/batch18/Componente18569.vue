<template>
  <section class="panel-18569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18569");
const base = ref(18569);
const total = computed(() => base.value * 2);

function incrementar18569() {
  base.value++;
}
</script>
