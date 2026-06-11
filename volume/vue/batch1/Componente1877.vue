<template>
  <section class="panel-1877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1877");
const base = ref(1877);
const total = computed(() => base.value * 2);

function incrementar1877() {
  base.value++;
}
</script>
