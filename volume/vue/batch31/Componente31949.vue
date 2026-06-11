<template>
  <section class="panel-31949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31949");
const base = ref(31949);
const total = computed(() => base.value * 2);

function incrementar31949() {
  base.value++;
}
</script>
