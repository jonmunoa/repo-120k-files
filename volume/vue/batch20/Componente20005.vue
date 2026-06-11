<template>
  <section class="panel-20005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20005");
const base = ref(20005);
const total = computed(() => base.value * 2);

function incrementar20005() {
  base.value++;
}
</script>
