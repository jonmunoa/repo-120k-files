<template>
  <section class="panel-35461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35461");
const base = ref(35461);
const total = computed(() => base.value * 2);

function incrementar35461() {
  base.value++;
}
</script>
