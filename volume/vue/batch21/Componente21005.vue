<template>
  <section class="panel-21005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21005");
const base = ref(21005);
const total = computed(() => base.value * 2);

function incrementar21005() {
  base.value++;
}
</script>
