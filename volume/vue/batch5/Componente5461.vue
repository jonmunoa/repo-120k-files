<template>
  <section class="panel-5461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5461");
const base = ref(5461);
const total = computed(() => base.value * 2);

function incrementar5461() {
  base.value++;
}
</script>
