<template>
  <section class="panel-44005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44005");
const base = ref(44005);
const total = computed(() => base.value * 2);

function incrementar44005() {
  base.value++;
}
</script>
