<template>
  <section class="panel-20061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20061");
const base = ref(20061);
const total = computed(() => base.value * 2);

function incrementar20061() {
  base.value++;
}
</script>
